//Plus One
class Solution {
    public int[] plusOne(int[] digits) {
        int len = digits.length;
        int n = 0, cnt = 0;
        
        for(int i = 0; i < len; i++){
            n += digits[i] * pow(10, 2 - i);
            
        }
        n++;
        int tmp = n;
        while(tmp != 0){
            tmp /= 10;
            cnt++;
        }
        for (int i = 0; i < cnt; i++){
            digits[cnt - 1 - i] = n % 10;
            n /= 10;
        }
        return digits;
        
    }
    public static int pow(int base, int exp){
        int n = 1;
        for(int i = 0; i < exp; i++){
            n *= base;
        }
        return base;
    }
}
