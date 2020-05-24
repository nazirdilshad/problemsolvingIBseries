int Solution::maxSubArray(const vector<int> &v) {
    int cur_max=v[0],sum=v[0];
    for(int i=1;i<v.size();i++){
        cur_max = max(v[i],cur_max+v[i]);
        sum = max(cur_max,sum);
    }
    return sum;
}
