long mod = 1000003;
int Solution::findRank(string A) {
    int fact[A.size()+1];
    fact[0]=1;
    for(int i=1;i<A.size()+1;i++){
        fact[i]=((fact[i-1])%mod*(i%mod))%mod;
    }
    set<char>s;
    vector<char> vv;
    for(int i=0;i<A.size();i++){
        s.insert(A[i]);
    }
    int ans=0;
    for(auto i = s.begin() ; i != s.end() ; i++) {
        vv.push_back(*i);
    }
    for(int i=0;i<A.size();i++){
        auto cnt = lower_bound(vv.begin() , vv.end(), A[i]) - vv.begin();
        auto idd = cnt + vv.begin();
        
        /*2ND METHOD
        for(int j=i+1;j<A.size();j++){
            if(A[i]>A[j])
                cnt++;
        }
        */
        
        ans = (ans%mod + (cnt*fact[A.size()-i-1])%mod)%mod;
        vv.erase(idd);
    }
    return ans+1;
}
