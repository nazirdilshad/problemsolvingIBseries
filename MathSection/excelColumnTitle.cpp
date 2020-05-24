string Solution::convertToTitle(int A) {
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ans = "";
    while(A>0){
        A = A-1;
        int rem = A%26;
        ans = s[rem] + ans;
        A = A/26;
    }
    return ans;
}
