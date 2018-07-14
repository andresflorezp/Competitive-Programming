#include <bits/stdc++.h>
using namespace std;

void bits(int n,int m,string output){
    if(n==0)cout<<output<<endl;
    else{
        for(int i=0;i<m;i++){
            stringstream ss;
            ss << i;
            bits(n-1,m,output+ss.str());

        }

    }



}
int main(){
    bits(30,2,"");

    return 0;
}
