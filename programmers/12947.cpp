//하샤드 수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int ten_thousands = 0, thousands = 0
        , hundreds = 0, tens = 0, ones = 0;
    int divisor = 0;
    int total = x;
    
    ten_thousands = x / 10000;
    x = x % 10000;
    
    thousands = x / 1000;
    x = x % 1000;
    
    hundreds = x / 100;
    x = x % 100;
    
    tens = x / 10;
    
    ones = x % 10;
    
    divisor = ten_thousands + thousands + hundreds + tens + ones;
    
    if(total % divisor != 0){
        answer = false;
    }
    
    return answer;
}