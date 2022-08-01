//좋은 날 싫은 날
#include <iostream>
#include <cmath> //round 함수 이용하기 위함임
#include <math.h> //pow 함수 사용하고자
#include <vector>

using namespace std;

//전역 변수 선언 및 정의
double good_good = 0, good_bad = 0, bad_good = 0, bad_bad = 0;
int days = 0; // N일 뒤
vector<double> good_vec; //N일 뒤 좋은 날일 확률의 집합
vector<double> bad_vec; //N일 뒤 싫은 날일 확률의 집합


void my_func(bool isBad, double prev, int cnt){
    
    if(isBad){ //싫은 날
        
        //싫은 날 다음 날 좋은 날일 확률
        if((cnt + 1) < days) my_func(0, prev * bad_good, cnt + 1);
        else good_vec.push_back(prev * bad_good);
       
        
        //싫은 날 다음 날 싫은 날일 확률
        if((cnt + 1) < days) my_func(1, prev * bad_bad, cnt + 1);
        else bad_vec.push_back(prev * bad_bad);
     
    
    }
    else{ //좋은 날

        //좋은 날 다음 날 좋은 날일 확률
        if((cnt + 1) < days) my_func(0, prev * good_good, cnt + 1);
        else good_vec.push_back(prev * good_good);

        //좋은 날 다음 날 싫은 날일 확률
        if((cnt + 1) < days) my_func(1, prev * good_bad, cnt + 1);
        else bad_vec.push_back(prev * good_bad);

    }

    return;
}

int main(){

    // 변수 정의
    bool isBad = 0; //금일 재현의 기분
    double per_good = 0, per_bad = 0; //N일 뒤 좋은/싫은 날일 확률
    double prev = 1; //처음 
    int cnt = 0;

    cin >> days >> isBad;
    cin >> good_good >> good_bad >> bad_good >> bad_bad;

    my_func(isBad, prev, 0);

    for(int i = 0; i < good_vec.size(); i++){
        per_good += good_vec.at(i);
    }
    for(int i = 0; i < bad_vec.size(); i++){
        per_bad += bad_vec.at(i);
    }

    per_good *= 1000;
    per_bad *= 1000;

    per_good = round(per_good);
    per_bad = round(per_bad);

    cout << per_good << endl;
    cout << per_bad << endl;

    good_vec.clear();
    bad_vec.clear();

    return 0;
}