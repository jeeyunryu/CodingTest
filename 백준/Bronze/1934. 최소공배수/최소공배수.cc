//1934번 최소공배수
#include <iostream>

using namespace std;

#define max 45001

int main(){

    //테스트 케이스 개수 입력 받아오기
    int cnt = 0; //(1 ≤ cnt ≤ 1,000)
    int n1 = 0, n2 = 0; // 두 수 (1 ≤ n1, n2 ≤ 45,000)
    int min = 0; //최소공배수
    int arr1[max], arr2[max], arr3[max];
    


    //두 수 받아오기
    cin >> cnt;

    // 두 수의 약수 구하기
    for(int i = 0; i < cnt; i++){
        int idx1 = 0, idx2 = 0, idx3 = 0;
        cin >> n1 >> n2;

        for(int j = 0; j < n1; j++){
            if(n1 % (j + 1) == 0){ // 1 ~ n1
               
                arr1[idx1++] = j + 1;
            }
        }

        for(int j = 0; j < n2; j++){ // 1 ~ n2
            if(n2 % (j + 1) == 0){ 
             
                arr2[idx2++] = j + 1;
            }
        }

        // 두 수의 공약수 구하기
        for(int j = 0; j < idx1; j++){
            for(int k = 0; k < idx2; k++){
                if(arr1[j] == arr2[k]){
                    
                    arr3[idx3++] = arr1[j];
                }
            }
        }
       
        min = n1 * n2 / arr3[idx3 - 1];
        
        // 최소공배수 출력하기
        // cout << idx3 << endl;
        // cout << arr3[idx3 - 1] << endl;
        cout << min << endl;
    }
    return 0;
}