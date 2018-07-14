#include <bits/stdc++.h>
using namespace std;
int T;
int DS[10001];
int DP[10001][10001];

int f(int i,int backed){
    int &s = DP[i][backed];
    if(i==T)return s=0;
    else if(s!=-1)return s;
    else if(backed!=T && DS[i]<=DS[backed])return s=f(i+1,backed);
    else return s=max(1+f(i+1,i),f(i+1,backed));

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>T;
    memset(DP,-1,sizeof(DP));
    for(int i=0;i<T;++i){

        cin>>DS[i];

    }
    cout<<f(0,T)<<endl;

    return 0;
}
