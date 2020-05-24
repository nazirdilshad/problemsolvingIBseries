typedef long long ll;
vector<int> Solution::repeatedNumber(const vector<int> &a) {
    vector<int>ans;
    ll n = a.size();
    ll sum=0,sumsq =0;
    for(int i = 0; i<a.size();i++){
        sum += a[i];
        sumsq += (ll)a[i]*(ll)a[i];
    }
    
    ll diff = (ll)(n*(n+1)/2)-sum;
    ll diff2 = (ll)((n*(n+1)*(2*n+1))/6)-sumsq;
    ll sumi = diff2/diff;

    ll repeated = (sumi-diff)/2;
    
    ll missing = (diff+sumi)/2;
  
    
    ans.push_back((int)repeated);
    ans.push_back((int)missing);
    
    return ans;

}
