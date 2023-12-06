#include<bits/stdc++.h>

using namespace std;


  long long int lenOfLongSubarr(long long int A[],  long long int N, long long int K) {
    
    
   long long  int sum=0,mx=0;
    map<long long int,long long int> mp;

    for(int i=0;i<N;i++){
        
        sum+=A[i];

        if(sum==K){
            //cout<<i+1<<endl;
            if(i+1>mx) mx=i+1;
        }

            if(sum>K){
                if(mp.find(sum-K)!=mp.end()){
                    if((i-mp[sum-K])>mx) mx =i-mp[sum-K];
                }
            }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        
    }

    return mx;
    } 
    

int main(){

    long long int n, k; cin>>n>>k;

    long long int a[n];

    for(int i=0;i<n;i++) cin>>a[i];


    cout<<lenOfLongSubarr(a,n,k);

    return 0;
}