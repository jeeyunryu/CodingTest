//11656번: 접미사 배열
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    //변수 선언
    string user_input;
    string tmp;
    //string* str_array;
    vector<string> str_array;

    //사용자 입력 받아오기
    cin >> user_input;

    //str_array = new string[user_input.size()];

    //접미사 나누기
    for(int i = 0; i < user_input.size(); i++){
        str_array.push_back(user_input.substr(i));
    }

    //접미사 사전 순으로 나열하기
    //버블 정렬

    sort(str_array.begin(), str_array.end());


    //결과 출력하기
    for(int i = 0; i < user_input.size(); i++){
        cout << str_array.at(i) << endl;
    }
    //delete[] str_array;
    return 0;
}