#include <bits/stdc++.h>
using namespace std;
string S1;
string S2;
int DP[1001][1001];
int LCS(int i,int j){
    if(i==0 || j==0)return 0;
    else if(S1[i-1]==S2[j-1])return 1+LCS(i-1,j-1);
    else return max(LCS(i-1,j),LCS(i,j-1));

}

int g(int n,int m){
    //memset(DP,0,sizeof(DP));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)DP[i][j]=0;
            else if(S1[i-1]==S2[j-1])DP[i][j]=1+DP[i-1][j-1];
            else DP[i][j]= max(DP[i-1][j],DP[i][j-1]);
        }
    }
    return DP[n][m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    S1 = "ABCBDAB";
    S2 = "BDCABA";
    //La respuesta es 4 y los LCS son BDAB BCAB BCBA
    int n = S1.size();
    int m = S2.size();
    cout<<n<<" "<<m<<endl;
    cout<<g(n,m)<<endl;

    return 0;
}
