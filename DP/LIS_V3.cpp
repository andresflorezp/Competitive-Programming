#include <bits/stdc++.h>
using namespace std;
int T;
int LIS(vector<int>& nums) {
    vector<int> res;
    for(int i=0; i<nums.size(); i++) {
        auto iter = std::lower_bound(res.begin(), res.end(), nums[i]);
        if(iter==res.end()) res.push_back(nums[i]);
        else *iter = nums[i];
    }
    return res.size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    vector<int> DS;
    int data;

    for(int i=0;i<T;i++){
        cin>>data;
        DS.push_back(data);
    }
    cout<<LIS(DS)<<endl;





    return 0;
}
