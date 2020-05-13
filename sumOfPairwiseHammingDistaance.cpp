long modulo = 1000000007;
int Solution::hammingDistance(const vector<int> &A) {
    vector<int>binary(32,0);
    for(int i=0;i<A.size();i++){
        int num = A[i];
        int j=0;
        while(num>0){
            binary[j] += (num&1);
            j++;
            num = num>>1;
        }
    }
    int ans = 0;
    for(int i=0;i<binary.size();i++){
        ans = (ans + 2*(binary[i]* (A.size()-binary[i])))%modulo;
    }
    return ans;
}
