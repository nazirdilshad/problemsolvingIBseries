bool isprime(int a){
    if(a<=1)return false;
    if(a==2)return true;
    if(a%2==0)return false;
    for(int i=3;i*i<=a;i+=2){
        if(a%i==0)return false;
    }
    return true;
}
vector<int> Solution::primesum(int a) {
    vector<int>ans;
    for(int i=0;i<a;i++){
        if(isprime(i) && isprime(a-i)){
            ans.push_back(i);
            ans.push_back(a-i);
            return ans;
        }
    }
    
}
