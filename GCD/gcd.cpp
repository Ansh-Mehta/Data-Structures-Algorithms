int calcGCD(int n, int m){
    // Write your code here.
    while(n>0 && m>0){
        n>m?n%=m:m%=n;
    }
    return n==0?m:n;
}
