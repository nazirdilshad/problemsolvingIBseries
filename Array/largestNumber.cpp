bool compare(string a,string b){
    return a+b>b+a;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> v ;
    bool zero = false;
    for(int i=0;i<A.size();i++){
        v.push_back(to_string(A[i]));
        if(A[i]!=0){
            zero =true;
        }
    }
    if(!zero){
        return "0";
    }
    sort(v.begin(),v.end(),compare);
    
    
    string ans = "";
    for(auto it: v){
        ans += it;
    }a
    return ans;
}
