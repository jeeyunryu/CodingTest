#include <string>
#include <iostream>

using namespace std;

int main() {
    string s = "Pyy";
    bool ans = true;
    int nop = 0, noy = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'p' || s[i] == 'P') {
            nop++;
        }
        else if(s[i] == 'y' || s[i] == 'Y') {
            noy++;
        }
    }
    if(nop != noy) {
        ans = false;
    }
    
    cout << ans << endl;

    return 0;
}