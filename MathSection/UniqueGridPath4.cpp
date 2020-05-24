int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1){
        return 1;
    }
    int n = (A+B-2);
    int r = (B-1);
    int ans = 1;
    if(r>(n-r)) r= n-r;
    for(int i=0;i<r;i++){
        ans *= (n-i);
        ans /= (i+1);
    }
    return ans;   
}