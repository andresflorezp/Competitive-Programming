#include <bits/stdc++.h>

using namespace std;
int sieve[10001]={0};
int facts[10001]={0};

void criba(){
    for(int i=2;i<=10001;i++){
        if(sieve[i]!=0)continue;
        for(int j=2*i;j<=10001;j+=i){
            if(sieve[j]==0)sieve[j]=i;
            else{
                sieve[j]=min(sieve[j],i);
            }

        }

    }
    /*
    for(int i=0;i<=10001;i++){
        cout<<sieve[i]<<" ";

    }
    */
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    criba();
    int N;
    cin>>N;
    int n;
    for(int i=N;i>=2;i--){
        n=i;
        while(n>=2){
            if(sieve[n]==0){
                facts[n]++;
                n=1;

            }
            else{
                facts[sieve[n]]++;
                n/=sieve[n];
            }

        }

    }
    int s=0;
    for(int i=0;i<10001;i++){

        if(facts[i]!=0){
            s++;
            if(s>1){
                cout<<" * ";

            }
            cout<<i<<"^"<<facts[i];


        }




    }






    return 0;

}

