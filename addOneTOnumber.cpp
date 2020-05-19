vector<int> Solution::plusOne(vector<int> &v) {
    int n = v.size();
    
    int carry = 0, flag = 0;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (flag == 0)
        {
            int y = v[i] + 1;
            if (y > 9)
            {
                v[i] = 0;
            }
            else
            {
                v[i] = y;
                flag = 1;
            }
        }
    }
    vector<int> a;
    int flag1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0 && flag1 == 0)
        {
            continue;
        }
        else
        {
            flag1 = 1;
            a.push_back(v[i]);
        }
    }
    if (flag1 == 0)
    {
        a.resize(n + 1, 0);
        a[0] = 1;
    }
    return a;
}
