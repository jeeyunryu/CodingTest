//1로 만들기
#include <iostream>
#include <vector>

using namespace std;

// void recur(vector<int> &arr, int n, int cnt){
    
//     if(n == 1){
//         arr.push_back(cnt);
//         return;
//     }

//     if(n % 3 == 0){
     
//         recur(arr, n / 3, cnt + 1);
//     }
//     if(n % 2 == 0){
        
//         recur(arr, n / 2, cnt + 1);
//     }
//     if(n - 1 != 0){
       
//         recur(arr, n - 1, cnt + 1);
//     }
// }

int main(){
    int n = 0;
    // min = 10000000;
    // vector<int> arr;

    int* arr;
    arr = malloc(sizeof(int) * (n + 1));

    cin >> n;
    //n = 10;
    // recur(arr, n, cnt);
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr.at(i) < min){
    //         min = arr.at(i);
    //     }
    // }
    //arr[1] = 0;
    for(int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] + 1;
        
        if(i % 2 == 0){
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }

        if(i % 3 == 0){
            arr[i] = min(arr[i], arr[i/3] + 1);
        }

    }
    
    cout << arr[n] << endl;
    free(arr);
    return 0;
}