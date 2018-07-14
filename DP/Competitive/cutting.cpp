#include <bits/stdc++.h>

using namespace std;

int f(int n,vector<int>& P){
    if(n==0)return 0;
    int resp = INT_MIN;
    for(int i=1;i<=n;i++){
        resp= max(resp,P[i-1]+f(n-i,P));


    }
    return resp;

}


int g(int n,vector<int>& P){
    int T[n+1];
    for(int i=0;i<=n;i++)T[i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            T[i]=max(T[i],P[j-1]+T[i-j]);



        }



    }
    return T[n];




}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> P(n);
    for(int i=0;i<n;i++){
        cin>>P[i];
    }
    cout<<g(n,P)<<endl;





    return 0;
}
