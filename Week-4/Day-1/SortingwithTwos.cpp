#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;

    while (t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        bool f=true;

        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                f=false;
                break;
            }
        }

        if(f) {
            cout<<"YES1"<<'\n';
            continue;
        }
        else{
            int m=0, mpow=pow(2,m);
            while(mpow<=n){
                bool fnl=false;
                for(int i=0;i<mpow;i++){
                    arr[i]=arr[i]-1;
                    if(arr[i]<0){
                        fnl=true;
                        break;
                    }
                }



                if(fnl){
                    cout<<"NO"<<'\n';
                    break;
                }
                bool f1=true;

                 for(int i=0;i<n-1;i++){
                   if(arr[i]>arr[i+1]){
                   f1=false;
                   break;
                }
                }

                if(f1) {
                    cout<<"YES2"<<'\n';
                    break;
                }
                else{
                    m++;
                    mpow = pow(2,m);
                }
            

            }
        }

         for(int i=0;i<n;i++) cout<<arr[i]<<" ";
         cout<<endl;
        
    }
    

return 0;
}