#include <iostream>
#include <vector>

using namespace std;

//청구 금액 계산
int calc(vector<int> vec, string yokumje){
    int fee = 0;
    int total = 0;
    int divisor = 0;

    if(yokumje == "ysik"){
        fee = 10;
        divisor = 30;

    } else {
        fee = 15;
        divisor = 60;
    }

    for(int i = 0; i < vec.size(); i++){
        if(vec.at(i) != 0){
            total += (vec.at(i) / divisor + 1) * fee;
        }
        
    }
    return total;
}

int main(){
    int numOfCalls;
    int tmp;
    int ysik = 0, msik = 0; //영식과 민식의 요금제를 적용했을 때 각각의 요금
    vector<int> vec;

    cin >> numOfCalls;

    for(int i = 0; i < numOfCalls; i++){
        cin >> tmp;
        vec.push_back(tmp);
    }

    ysik = calc(vec, "ysik"); //영식 요금제를 신청했을 경우 청구되는 금액

    msik = calc(vec, "msik"); //민식 요금제를 신청했을 경우 청구되는 금액

    if (ysik == msik){
        cout << "Y M " << ysik << endl;
    } else if(ysik > msik){
        cout << "M" << " " << msik << endl;
    } else {
        cout << "Y" << " " << ysik << endl;
    }


    return 0;
}