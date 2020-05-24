vector<int> Solution::flip(string A) {
    
    int cur_sum=0,sum=0,si=0,ei=0,start=0,j=0;
    for(int i=0;i<A.size();i++){
        
        
        cur_sum += (A[i]=='1')?-1:1;
        
    
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
    
    if(sum){
        res.push_back(start+1);
        res.push_back(ei+1);   
    }
    
    
    return res;
    
}
