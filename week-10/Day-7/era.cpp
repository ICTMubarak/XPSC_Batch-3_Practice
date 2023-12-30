#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t; cin>>t;
    while (t--){
      long long  int n; cin>>n;
 
        long long int arr[n+1],count=0;
        for(int i =1;i<=n;i++) cin>>arr[i];
 
        for(int i = 1,j=1;i<=n;i++,j++){
 
            if(arr[i]>j){
                count = count + arr[i]-j;
                j = j+arr[i]-j;
                
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}