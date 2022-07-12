#include <iostream>
#include <string>
using namespace std;

int main(){
    int num = 0; // number of words given as input
    int cnt = 0; // number of group numbers
    bool isGWord = true;

    string words[100];

    cin >> num; // 입력할 단어의 수
    for(int i = 0; i < num; i++){
        cin >> words[i]; // 입력되는 단어를 배열에 저장
    }
    
    for(int i = 0; i < num; i++){ // 모든 단어 스캔
        for(int j = 0; j < words[i].length(); j++){ //단어의 모든 글자 스캔 (처음 부터 마지막 글자까지)
            for(int k = j + 1; k < words[i].length(); k++){ //위에서 스캔 중인 글자를 시작으로 단어의 마지막 글자까지 스캔 해 비교
                if(words[i][j] == words[i][k]){ // 글자가 반복돼서 나타난 경우
                    if(words[i][k] != words[i][k-1]){ //연속적으로 반복되는지 확인
                        isGWord = false; // 같은 글자가 불연속적으로 반복된 경우 그룹단어가 아님
                        break;
                    }
                }
            }
            if(!isGWord){
                break;
            }
        }
        if(isGWord){ //단어 스캔 완료 후 그룹단어 개수 1씩 증가
            cnt++;
        }
        isGWord = true;
    }

    cout << cnt << endl;

    return 0;
}
