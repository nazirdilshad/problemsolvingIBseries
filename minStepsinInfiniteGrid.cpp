int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    int sum = 0;
    for(int i=0;i<(a.size()-1);i++){
        if(abs(a[i]-a[i+1])<=abs(b[i]-b[i+1])){
            sum += abs(b[i]-b[i+1]);
        }
        else{
            sum += abs(a[i]-a[i+1]);
        }
    }
    
    // for(int i=1;i<a.size();i++)
    //     sum+=max(abs(a[i]-a[i-1]),abs(b[i]-b[i-1]));
    return sum;
    
    
}
