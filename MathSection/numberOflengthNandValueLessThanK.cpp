int Solution :: solve(vector<int>& A, int B, int C){
    int na = A.size();
        if (na == 0)
            return 0;

        vector<int> flag(10, 0);
        for (int i = 0; i < na; i++)
            flag[A[i]] = 1;

        string s = to_string(C);
        if (B > s.size())
            return 0;
        else if (B < s.size())
        {
            if (B == 1)
                return na;
            return pow(na, B - 1) * (A[0] == 0 ? na - 1 : na);
        }

        int ans = 0;
        for (int i = 0; i < B; i++)
        {
            bool pos = 0;
            for (int j = 0; j < (s[i] - '0'); j++)
            {
                if ((i == 0 && j == 0) || !flag[j])
                    continue;
                ans += pow(na, B - i - 1);
            }
            if (!flag[s[i] - '0'])
                break;
        }
        if (flag[0] && C > 0 && 1 == B)
            ans++;
        return ans;
}
