//카이샤르 문자
#include <iostream>
#include <string>

using namespace std;

int main(){
    //char str[10];
    int len;
    string str;

    cin >> str;

    len = str.length();

    //암호 해독
    for(int i = 0; i < len; i++){
        if(str[i] < 68){ // 알파벳 첫 3글자: A, B, C의 경우 예외 설정
            cout << (char)(str[i] + 23);
        }
        else{
            cout << (char)(str[i] - 3);
        }
    }
    
    return 0;
}
