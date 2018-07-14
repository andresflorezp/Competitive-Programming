#include <bits/stdc++.h>
using namespace std;
string S1;
string S2;

int f(int n,int m){
    int cur[m+1];
    int prev[m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)cur[j]=0;
            else if(S1[i-1]==S2[j-1])cur[j]=1+prev[j-1];
            else cur[j]=max(cur[j-1],prev[j]);
        }
        for(int k=0;k<=m;k++){
            prev[k]=cur[k];
        }

    }
    return cur[m];




}


int main(){
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    S1 = "ABCBDAB";
    S2 = "BDCABA";
    //La respuesta es 4 y los LCS son BDAB BCAB BCBA
    int n = S1.size();
    int m = S2.size();
    cout<<f(n,m)<<endl;

    return 0;
}
