class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string rev = s;
        int n = rev.size();
        for(int i=0; i<n; i++){
            int temp = rev[i]; 
            rev[i] = rev[n-i-1];
            rev[n-i-1] = rev[i];
        }
        if(s==rev){
            return true;
        }
        return false;
    }
};