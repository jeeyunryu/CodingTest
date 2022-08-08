//2217번: 로프
#include <iostream>
#include <algorithm>

using namespace std;

#define max 100001

int func(int arr[], int ropes){
    
    int tmp = 0;
    int maximum = 0;

    for(int i = 0; i < ropes; i++){
        tmp = arr[ropes - 1 - i] * (ropes - i); 
        if(tmp > maximum){
            maximum = tmp;
        }
    }

    return maximum;
    
}

int main() {
		
        int ropes; // 1 ≤ N ≤ 100,000
		int min = 10001;
		int tmp = 0;
        int arr[max];
        int idx = 0;

        cin >> ropes;
        idx = ropes - 1;


		
		for(int i = 0; i < ropes; i++) {
            cin >> arr[i]; 

			//size = i;
		}

        sort(arr, arr + ropes, greater<int>()); //내림차순으로 정렬

        cout << func(arr, ropes) << endl;
		
        //cout << min * ropes << endl;

        return 0;
}