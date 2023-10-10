#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k) {
    cout<<k;
    int N =  a.size();
    cout<<N;
    int arr[N];
    int i=0;
    for(auto val:a){
        arr[i]=val;
        i++;
    }

    int n=i-1;

    int i=0,j=0,sum=0;
    int mx = INT_MIN;
    while(j<n){

        sum+=arr[j];
        if(j>=k-1){
             //cout<<sum<<endl;
             if(sum>mx) mx=sum;
             sum-=arr[i];
             i++;
        }
        j++;
    }

    return mx;
    
}

int main(){
    int n, k; cin>>n>>k;
    vector<int> v;
    for(int i =0 ;i <n;i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    //int x = longestSubarrayWithSumK(v,k);
    cout<<0;
    return 0; 
}