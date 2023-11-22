#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        bool f=true;
        int count=0;
        
            for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1]){
                if(arr[i]==0&&arr[i+1]==0){
                    f=false;
                    break;
                }
                arr[i]=arr[i]/2;
                count++;
            }
        }
        
        

         if(f) cout<<count<<'\n';
         else cout<<-1<<'\n';
        
    }

    return 0; 
}