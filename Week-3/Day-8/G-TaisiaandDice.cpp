#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){

        int n,s,r; cin>>n>>s>>r;
        int stolen = s-r, arr[n];
        arr[0]=stolen;
        for(int i=1;i<n;i++) arr[i]=1;

        int remain = r-n+1;

        for(int i=1;i<n;i++){
            //cout<<remain<<endl;
            if(remain-stolen>=0){
                arr[i]=stolen;
                remain=remain-stolen+1;
            }
            else {
                arr[i]= remain+1;
                break;
            } 
        }

        for(int i=n-1;i>-1;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}