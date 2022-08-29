#include <iostream>

using namespace std;

void my_func(int i, int j, int n);

int main(){
    int n;
    int i, j;
    cin >> n;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            my_func(i, j, n);
        }
        cout << endl;
    }
}

void my_func(int i, int j, int n){
    if((i / n) % 3 == 1 && (j / n) % 3 == 1){
        cout << " ";
    }
    else if(n % 3 == 0){
        my_func(i, j, n / 3);
    }
    else {
        cout << "*";
    }
}