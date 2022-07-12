#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0; // number of words given as input
    int cnt = 0; // number of group numbers
    bool isGWord = true;

    string words[100];

    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> words[i];
    }
    
    for(int i = 0; i < num; i++){
        for(int j = 0; j < words[i].length(); j++){
            for(int k = j + 1; k < words[i].length(); k++){
                if(words[i][k] == words[i][j]){
                    if(words[i][k] != words[i][k-1]){
                        isGWord = false;
                        break;
                    }
                }
            }
            if(!isGWord){
                break;
            }
        }
        if(isGWord){
            cnt++;
        }
        isGWord = true;
    }

    cout << cnt << endl;

    return 0;
}
