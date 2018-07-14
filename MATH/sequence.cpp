#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T,a,b;
    cin>>T;
    int an;
    int bn;
    int re1,re2;
    int EPS=0;
    for(int i=0;i<T;i++){
        cin>>a;
        cin>>b;
        if(a%2==0){
            a-=1;

        }
        else if(a%2==1){
            a-=2;
        }
        if(b%2==0){
            b+=1;

        }
        else if(b%2==1){
            b+=2;
        }

        an = ceil(a/2)-1;
        bn = ceil(b/2)-1;
        re1 = an*an;
        re2 = bn*bn;

        cout<<"Case "<<(i+1)<<": "<<re2-re1<<endl;




    }




}
