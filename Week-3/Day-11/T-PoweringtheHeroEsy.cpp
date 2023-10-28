#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n,x;cin>>n;
        vector<long long int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        long long int ans=0;
        priority_queue<long long int> pq;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                if(!pq.empty()){
                    ans=ans+pq.top();
                    pq.pop();
                }
            }
            else{
                pq.push(v[i]);
            }
        }

        cout<<ans<<endl;

    }



    return 0; 
}