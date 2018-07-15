#include <bits/stdc++.h>

using namespace std;


vector<int> funcionF(string P,int n){
    vector<int> F(n,0);
    int i=1;
    int j=0;
    while(i<n){
        if(P[i]==P[j]){
            F[i]=j+1;
            i++;
            j++;

        }
        else if(j>0){
            j=F[j-1];
        }
        else{
            F[i]=0;
            i++;

        }


    }
    return F;



}
int KMP(int n,string T,int m,string P){
    vector<int> F = funcionF(P,m);
    int i=0;
    int j=0;
    int cnt=0;
    while(i<n){
        if(T[i]==P[j]){
            if(j==m-1){
                cnt++;
                j=F[j];
                i++;


            }
            else{
                i++;
                j++;

            }



        }
        else if(j>0){
            j=F[j-1];

        }
        else{
            i++;


        }




    }
    return cnt;



}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string P;
    string T;
    cin>>P;
    string RP = P;
    reverse(RP.begin(),RP.end());
    T = P+"@"+RP;
    vector<int> F = funcionF(T,T.size());
    for(int i=0;i<F.size();i++)cout<<F[i]<<" ";
    cout<<endl;
    cout<<F[T.size()-1]<<endl;




    return 0;
}
