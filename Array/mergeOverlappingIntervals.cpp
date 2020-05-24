/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool compare(Interval i1,Interval i2){
     return i1.start<i2.start;
 }
vector<Interval> Solution::merge(vector<Interval> &a) {
    
    vector<Interval> ans;
    int j=0;
    sort(a.begin(),a.end(),compare);
    
    ans.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        if(a[i].start<=ans[j].end){
            ans[j].end = max(a[i].end,ans[j].end);
        }
        else{
            ans.push_back(a[i]);
            j++;
        }
    }
    return ans;
}
