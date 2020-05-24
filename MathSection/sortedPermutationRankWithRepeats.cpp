long long int mod = 1000003;
long long int power(long long int a,long long int b){
    if(a==0)return 0;
    if(b==0)return 1;
    long result;
    if(b%2==0){
        result = power(a,b/2);
        result = (result*result)%mod;
    }
    else{
        result = a%mod;
        result = (result*power(a,b-1)%mod)%mod;
    }
    return result%mod;
}

int Solution::findRank(string A) {
    int fact[A.size()+1];
    fact[0]=1;
    for(int i=1;i<A.size()+1;i++){
        fact[i]=((fact[i-1])%mod*(i%mod))%mod;
    }
    
    int ans=0;
    for(int i=0;i<A.size();i++){
        int cnt = 0;
        for(int j=i+1;j<A.size();j++){
            if(A[i]>A[j])
                cnt++;
        }
	
	//map to keep count of repitition so that we can divide by it when we are summing the answer
        map<char,int>m;
        for(int k=i;k<A.size();k++){
            m[A[k]]++;
        }
        long long int d=1;
        for(auto it:m){
            d = (d%mod*(fact[it.second])%mod)%mod;
        }
        
        //we use mmi property for taking modulo in division 
        ans = (ans + (cnt*fact[A.size()-i-1])%mod*(power(d,mod-2))%mod)%mod;
        
    }
    return (ans+1)%mod;
}
