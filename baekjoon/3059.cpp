#include <iostream>
#include <string>

using namespace std;

int main(){
    int n = 0; //테스트케이스 개수
    string str; //입력으로 받아오는 문자열
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    cin >> n;

    for(int i = 0; i < n; i++){
        int sum = 0;
        cin >> str;
        for(int j = 0; j < 26; j++){
            if(!(str.find(alphabet.at(j)) < str.size())){
                sum += (int) alphabet.at(j);
            }
        }
        cout << sum << endl;
    }

    
    
    return 0;
}