#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int N,sum=0; cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++){
        int x;cin>>x;
        sum=sum+x;
        v.push_back(x);
    }

    if(sum%2==0){
        cout<<sum;
    }
    else{
        sort(v.begin(),v.end());
        int small=0;
        for(auto val:v){
            if(val%2==1){
                small=val;
               // cout<<small<<endl;
                break;
            } 
        }
        cout<<sum-small;
    }
    return 0;
}