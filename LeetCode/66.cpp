#include <algorithm>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_index = digits.size() - 1;
        while(last_index >= 0 && digits[last_index] == 9){
            digits[last_index--] = 0;
            
        }
        if(last_index == -1){
            digits.push_back(1);
            reverse(digits.begin(), digits.end());
        }
        else digits[last_index]++;
        return digits;
    }
};