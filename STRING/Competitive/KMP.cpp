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
    vector<int> index;
    while(i<n){
        if(T[i]==P[j]){
            if(j==m-1){
                index.push_back(i-j);
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
    for(int i=0;i<index.size();i++)cout<<index[i]<<" ";
    cout<<endl;
    return cnt;



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string P;
    string T;
    cin>>T;
    cin>>P;
    cout<<KMP(T.size(),T,P.size(),P)<<endl;




    return 0;
}
