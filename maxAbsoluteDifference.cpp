int Solution::maxArr(vector<int> &v) {
    int maxx= INT_MIN;
    int minn = INT_MAX;
    int maxx2 = INT_MIN;
    int minn2 = INT_MAX;
    for(int j=0;j<v.size();j++){
        int i = j+1;
        maxx = max(v[j]+i,maxx);
        minn= min(v[j]+i,minn);
        maxx2 = max(v[j]-i,maxx2);
        minn2 = min(v[j]-i,minn2);
    }
    return max(maxx-minn,maxx2 - minn2);
}
