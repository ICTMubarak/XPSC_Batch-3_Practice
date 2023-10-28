#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int k,n; cin>>k>>n;
        
        if(k==n){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }

         int ans=0, temp=0,tempPre;
        for(int j=0, i=1;temp<n&&k;i++,k--,j++){
            
            tempPre=ans-j+1;
            ans=ans+i;
            temp=ans-j;
            
            if(n-temp>=k&&temp<=n) cout<<temp<<" ";
            else{
                //cout<<"bt"<<temp;
                break;
            }
        }
       
        while(k--){
            tempPre++;
            cout<<tempPre<<" ";
            
        }

        // while(k--){
        //     ans++;

        // }
        ///

        cout<<endl;
    }


    return 0;
}