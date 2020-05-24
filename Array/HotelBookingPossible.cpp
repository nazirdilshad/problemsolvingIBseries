bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>> v;
    for(int i=0; i < arrive.size();i++){
        v.push_back(make_pair(arrive[i],1));
        v.push_back(make_pair(depart[i],0));
    }
    
    sort(v.begin(),v.end());
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i].second == 1){
            cnt++;
            if(cnt>K){
                return false;
            }
        }
        else{
            cnt--;
        }
    }
    return true;
}
