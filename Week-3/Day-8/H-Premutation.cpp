#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    //cout<<t<<endl;
    while(t--){
        vector<int> v;
        int n; cin>>n;  
        //cout<<n<<endl;      
        int Q = (n-1)*n;
        //cout<<Q<<endl;
        for(int i=1;i<=Q;i++){
           int x; cin>>x;
           //cout<<x<<" ";
            auto idx = find(v.begin(),v.end(),x);
            if(idx==v.end()){
                v.push_back(x); 
                
            } 
        }
    
        for(auto val:v){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0; 
}