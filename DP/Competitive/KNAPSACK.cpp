#include <bits/stdc++.h>

using namespace std;
int P[1001];
int W[1001];
int MOO = -10000;
int DP[1001][1001];

int f(int i,int S){
    if(S==0 || i==0)return 0;
    else if(W[i-1]>S)return f(i-1,S);
    else return max(P[i-1]+f(i-1,S-W[i-1]),f(i-1,S));

}

vector<pair<int,int>> print(int n,int S,vector<pair<int,int>>& re){
    if(S==0 || n==0)return re;
    else if(W[n-1]>S)return print(n-1,S,re);
    else{
        if(DP[n-1][S-W[n-1]]>=DP[n-1][S]){
            re.push_back(make_pair(P[n-1],W[n-1]));
            cout<<P[n-1]<<" "<<W[n-1]<<endl;
            return print(n-1,S-W[n-1],re);
        }
        else{
            return print(n-1,S,re);
        }


    }









}

int g(int n,int S){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=S;j++){
            if(j==0 || i==0)DP[i][j]=0;
            else if(W[i-1]>j)DP[i][j]=DP[i-1][j];
            else DP[i][j]=max(P[i-1]+DP[i-1][j-W[i-1]],DP[i-1][j]);


        }


    }
    return DP[n][S];




}


int main(){
    int n,S;
    cin>>n;
    cin>>S;
    for(int i=0;i<n;i++)cin>>P[i];
    for(int i=0;i<n;i++)cin>>W[i];
    cout<<g(n,S)<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=S;j++){
            cout<<DP[i][j]<<" ";


        }
        cout<<endl;


    }
    vector<pair<int,int>> L;
    vector<pair<int,int>> resp = print(n,S,L);
    cout<<resp.size();

    return 0;
}



/*
6
10
20 5 10 40 15 25
1 2 3 8 7 4

*/

