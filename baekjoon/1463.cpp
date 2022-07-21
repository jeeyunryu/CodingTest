#include <iostream>

using namespace std;

int recur(int n){
    if(n % 3 == 0){
        recur(n / 3);
    }
    if(n % 2 == 0){
        recur(n / 2);
    }
    if(n - 1 != 0){
        recur(n - 1);
    }
}

int main(){
    int n = 0, cnt = 0;

    cin >> n;
    recur(n);
    while(n != 1){
        if(n % 3 == 0){
            n = n / 3;
        } else if(n % 2 == 0){
            n = n / 2;
        } else {
            n--;
        }
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}