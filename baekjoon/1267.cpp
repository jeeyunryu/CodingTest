#include <iostream>
#include <vector>

using namespace std;

//청구 금액 계산
int calc(vector<int> vec, int fee){
    for(int i = 0; i < vec.size(); i++){
        if(vec.at(i) != 0){
            fee += (vec.at(i) / 30 + 1);
        }
        
    }
    return fee;
}

int main(){
    int numOfCalls;
    int tmp;
    int ysik = 0, msik = 0;
    vector<int> vec;

    cin >> numOfCalls;

    for(int i = 0; i < numOfCalls; i++){
        cin >> tmp;
        vec.push_back(tmp);
    }

    //영식 요금제를 신청했을 경우 청구되는 금액
    for(int i = 0; i < vec.size(); i++){
        if(vec.at(i) != 0){
            ysik += (vec.at(i) / 30 + 1) * 10;
        }
        
    }

    //민식 요금제를 신청했을 경우 청구되는 금액
    for(int i = 0; i < vec.size(); i++){
        if(vec.at(i) != 0){
            msik += (vec.at(i) / 60 + 1) * 15;
        }
        
    }

    if (ysik == msik){
        cout << "Y M " << ysik << endl;
    } else if(ysik > msik){
        cout << "M" << " " << msik << endl;
    } else {
        cout << "Y" << " " << ysik << endl;
    }


    return 0;
}