//좋은 날 싫은 날
#include <iostream>
#include <cmath> //round 함수 이용하기 위함임
//#include <math.h> //pow 함수 사용하고자
#include <vector>

using namespace std;


// void my_func(bool isBad, double prev, int cnt){
    
//     if(isBad){ //싫은 날
        
//         //싫은 날 다음 날 좋은 날일 확률
//         if((cnt + 1) < days) my_func(0, prev * bad_good, cnt + 1);
//         else good_vec.push_back(prev * bad_good);
       
        
//         //싫은 날 다음 날 싫은 날일 확률
//         if((cnt + 1) < days) my_func(1, prev * bad_bad, cnt + 1);
//         else bad_vec.push_back(prev * bad_bad);
     
    
//     }
//     else{ //좋은 날

//         //좋은 날 다음 날 좋은 날일 확률
//         if((cnt + 1) < days) my_func(0, prev * good_good, cnt + 1);
//         else good_vec.push_back(prev * good_good);

//         //좋은 날 다음 날 싫은 날일 확률
//         if((cnt + 1) < days) my_func(1, prev * good_bad, cnt + 1);
//         else bad_vec.push_back(prev * good_bad);

//     }

//     return;
// }

int main(){

    //int cnt = 0;
    int days = 0; // N값 (사용자로부터 입력 받음)
    double per_good = 0, per_bad = 0; //N일 뒤 좋은/싫은 날일 확률
    //double prev = 1; //처음 
    double tmp = 0; //임시 변수
    double good_good = 0, good_bad = 0, bad_good = 0, bad_bad = 0; //좋은 날/싫은 날 다음 날이 좋은 날/싫은 날일 확률 (사용자로부터 입력 받음)
    vector<double> good_vec; //(인덱스값 + 1)일 뒤 좋은 날일 확률
    vector<double> bad_vec; //(인덱스값 + 1)일 뒤 싫은 날일 확률
    bool isBad = 0; //금일 재현의 기분

    cin >> days >> isBad; //N값과 재현의 금일 기분을 입력 받음
    cin >> good_good >> good_bad >> bad_good >> bad_bad; //확률을 입력 받음

    if(isBad){ //첫째 날: 싫은 날
        good_vec.push_back(bad_good); //싫은 날 다음 좋은 날일 확률: 1일 뒤 좋은 날일 확률
        bad_vec.push_back(bad_bad); //싫은 날 다음 싫은 날일 확률: 1일 뒤 싫은 날일 확률
    }
    else{ //첫째 날: 좋은 날
        good_vec.push_back(good_good); 
        bad_vec.push_back(good_bad);
    }

    for(int i = 1; i < days; i++){
        tmp = good_vec.at(i - 1) * good_good + bad_vec.at(i - 1) * bad_good;
        good_vec.push_back(tmp);
        tmp = good_vec.at(i - 1) * good_bad + bad_vec.at(i - 1) * bad_bad;
        bad_vec.push_back(tmp);
    }

    // my_func(isBad, prev, 0);

    // for(int i = 0; i < good_vec.size(); i++){
    //     per_good += good_vec.at(i);
    // }
    // for(int i = 0; i < bad_vec.size(); i++){
    //     per_bad += bad_vec.at(i);
    // }

    // per_good *= 1000;
    // per_bad *= 1000;

    // per_good = round(per_good);
    // per_bad = round(per_bad);

    per_good = round(good_vec.back() * 1000);
    per_bad = round(bad_vec.back() * 1000);

    cout << per_good << endl;
    cout << per_bad << endl;

    return 0;
}
