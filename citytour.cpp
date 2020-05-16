long long mod = 1e9+7;
long long power(long long a, long long  b)
{
    if (a == 0)
        return 0;
    if (b == 0)
        return 1;
    long long result;
    if (b % 2 == 0)
    {
        result = power(a, b / 2);
        result = (result * result) % mod;
    }
    else
    {
        result = a % mod;
        result = (result * power(a, b - 1) % mod) % mod;
    }
    return result % mod;
}
    
int Solution::solve(int n, vector<int> &v) {
    long long totalBlank = n - v.size();
    long long fact[10005];
    fact[0] = 1;
    for (int i = 1; i <= 10000; i++)
    {
        fact[i] = (i * fact[i - 1]) % mod;
    }
    
    sort(v.begin(), v.end());

    vector<long long> v2;
    v2.push_back(v[0] - 1);
    for (int i = 1; i < v.size(); i++)
    {
        v2.push_back(v[i] - v[i - 1] - 1);
    }
    v2.push_back(n - v[v.size() - 1]);

    long long ans = 1, divi = 1;
    for (int i = 0; i < v2.size(); i++)
    {
        divi = (divi * fact[v2[i]]) % mod;
        if(i!=0 && i!= v2.size()-1 && v2[i]>=1){
            ans = (ans * power(2, v2[i] - 1)) % mod;
        }
    }
   

    ans = (ans * fact[totalBlank]) % mod;
    ans = (ans * (power(divi, mod - 2))) % mod;
    return ans;
}
