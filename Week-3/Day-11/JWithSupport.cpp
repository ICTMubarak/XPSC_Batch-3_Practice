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
        vector<int> v;
        for(int j=0, i=1;temp<n&&k;i++,k--,j++){
           
            tempPre=ans-j+1;
            ans=ans+i;
            temp=ans-j;
            
            if(temp<=n) v.push_back(temp);
            else{
                break;
            }

        }
        

         
          if(k>0){
            if(temp!=n)
             temp=tempPre;
             // cout<<n-k<<k;
             while(n-temp<k) {
                 v.pop_back();
                 for(auto t:v){
                     temp=t;
                 }
                 k++;
             }
                 while(k--){
                     temp++;
                     v.push_back(temp);
                    
                }
               }

          for(auto val: v){
                 cout<<val<<" ";
             }



        cout<<endl;
    }


    return 0;
}