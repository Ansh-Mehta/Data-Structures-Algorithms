class Solution {
public:
    bool isPalindrome(int x) {
        double rev = 0;
        int temp = x;
        while(x>0){
            rev = rev*10 + x%10;
            x /= 10;
        }
        if (rev==temp) return true;
        return false;
    }
};