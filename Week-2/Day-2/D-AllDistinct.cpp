#include<bits/stdc++.h>
using namespace std;




int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

       
         
             for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]!=0&&arr[j]&&(arr[i]==arr[j])){
                        arr[i]=0;arr[j]=0;
                        
                    }
                }
        }


        int count =0 ;
        for(int i=0;i<n;i++){
            if(arr[i]!=0) {
                count++;
                //cout<<arr[i]<<" ";
            }
        }
        if(count==0) count+=2;
        
        cout<<count<<endl;
    }
    return 0;
}