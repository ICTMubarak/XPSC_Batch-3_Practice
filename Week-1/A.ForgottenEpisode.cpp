#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;N--;
    vector<int> v;
    while (N--){
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    int result=0,temp=0;
    
    for(auto val:v){
        //cout<<val<<endl;
        temp = val;
        //cout<<temp<<endl;
        break;
    }
    
    for(auto val:v){
        if(val-temp==2){
            result=temp;
            //cout<<result<<endl;
            break;
        }
        temp = val;
    }
    cout<<result+1;
    return 0;
}