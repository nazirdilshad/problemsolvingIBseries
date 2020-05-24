vector<int> Solution::flip(string A) {
    int n = A.length();
    int one =0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        if(A[i]=='0'){
            v[i]=1;
        }
        else{
            one++;
            v[i]=-1;
        }
    }
    if(one==n){
        return vector<int>();
    }
    
    int cur_sum=0,sum=0,si=0,ei=0,start=0,j=0;
    for(int i=0;i<v.size();i++){
        
        cur_sum = max(v[i],cur_sum+v[i]);
        //cur_sum += v[i];
        
    
        if(cur_sum>sum){
            start = j;
            sum = cur_sum;
            ei = i;
        }
        if(cur_sum<0){
            j=i+1;
            cur_sum=0;
        }
        
    }
    vector<int>res;
    res.push_back(start+1);
    res.push_back(ei+1);
    return res;
    
}
