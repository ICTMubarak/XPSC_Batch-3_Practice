#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        long long int n; cin>>n;
        //cout<<n<<endl;
       long long int arr[n];
        long long int sum=0;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
             sum+=abs(arr[i]);
        } 

        long long int count=0,x,j=0,k=0;

        for(long long int i=0;i<n;i++){
           
             while(arr[i]<1&&i<n){
       
                if(arr[i]<0)j++;
                if(arr[i]==0) k++;
                 i++;
             }
        
             if((j>0&&k>0)||(j>0&&k==0)){
                count++;
                j=0;
                k=0;
             }
        }

        cout<<sum<<" "<<count<<'\n';

        

        
    }

    return 0;
}