vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int n = A.size();
    if(A.size()%2!=0){
        n = A.size()-1;
    }
    for(int i=0;i<n;i+=2){
        swap(A[i],A[i+1]);
    }
    
    return A;
}
