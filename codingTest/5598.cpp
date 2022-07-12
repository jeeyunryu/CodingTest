#include <iostream>
#include <string>

using namespace std;

int main(){
    //char str[10];
    int len;
    string str;

    cin >> str;

    len = str.length();

    for(int i = 0; i < len; i++){
        if(str[i] < 68){
            cout << (char)(str[i] + 23);
        }
        else{
            cout << (char)(str[i] - 3);
        }
    }
    
    return 0;
}
