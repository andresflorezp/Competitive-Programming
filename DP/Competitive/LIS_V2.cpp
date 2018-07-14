#include <bits/stdc++.h>
using namespace std;

int DP[100001];
int DS[100001];
int T;
int LIS(){
    int maxan=0;
    for(int k=0;k<T;k++){
        DP[k]=1;
        for(int i=0;i<k;i++){
            if(DS[i]<DS[k])DP[k]=max(DP[k],DP[i]+1);
        }
        maxan = max(maxan,DP[k]);
    }
    return maxan;





}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;

    for(int i=0;i<T;i++)cin>>DS[i];
    cout<<LIS()<<endl;





    return 0;
}
