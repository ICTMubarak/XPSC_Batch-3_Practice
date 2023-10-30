#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while (t--){
        int n,q;cin>>n>>q;
        long long int arr[n],sumPre=0,sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sumPre+=arr[i];
        } 
        sum=sum+sumPre;
        while(q--){
            int x, y; cin>>x>>y;
            if(x==0){
                long long int sumOfIncEv=0;
                sumPre=0;
                for(int i=0;i<n;i++){
                    sumPre+=arr[i];
                    if(arr[i]%2==0){
                        arr[i]+=y;
                        sumOfIncEv+=y;
                    } 
                }
                sum=sumPre+sumOfIncEv;
                cout<<sum<<'\n';
            }
            else{
                long long int sumOfIncOd=0;
                sumPre=0;
                for(int i=0;i<n;i++){
                    sumPre+=arr[i];
                    if(arr[i]%2==1){
                        arr[i]+=y;
                        sumOfIncOd+=y;
                    } 
                }
                sum=sumPre+sumOfIncOd;
                cout<<sum<<'\n';
            }
        }

        

    }
    


    return 0;
}