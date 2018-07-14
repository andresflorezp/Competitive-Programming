#include <bits/stdc++.h>

using namespace std;

void print(vector<int> L){
    for(int i=0;i<L.size();i++){
        cout<< L[i]<<" ";

    }

}
void permute(vector<int>& V,vector<int>& output){
    if(V.empty()){

        print(output);

        cout<<endl;

    }
    else{
        for(int i=0;i<V.size();i++){
            int c = V[i];
            V.erase(V.begin()+i);
            output.push_back(c);
            permute(V,output);
            V.insert(V.begin()+i,1,c);
            output.pop_back();
        }

    }

}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> V;
    vector<int> D;
    int data=0;
    for(int k=0;k<4;k++){
        cin>>data;
        V.push_back(data);
    }
    permute(V,D);

    return 0;
}
