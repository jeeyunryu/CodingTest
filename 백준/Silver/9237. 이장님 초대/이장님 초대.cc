//#9237 이장님 초대
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n = 0; //묘목의 개수
    int tmp = 0; //임시로 사용자 입력 저장
    int max = 0;
    int *arr; 

    cin >> n;
    arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arr[i] = tmp;
    }
    sort(arr, arr + n, greater<int>());

    for(int i = 0; i < n; i++){
        arr[i] = arr[i] + i + 1;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << ++max << endl; //나무들이 다 자란 다음날 이장님 초대

    return 0;
}