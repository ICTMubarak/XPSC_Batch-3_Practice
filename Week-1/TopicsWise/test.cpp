#include<bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
       long long int i=0,j=0,sum=0;
    long long int mx = LONG_MIN;
    while(j<N){

        sum+=Arr[j];
        if(j>=K-1){
             //cout<<sum<<endl;
             if(sum>mx) mx=sum;
             sum-=Arr[i];
             i++;
        }
        j++;
    }

    return mx;
    }

long long longestSubarrayWithSumK(vector<int> a, long long k) {
    //cout<<k;
    int N =  a.size();
    cout<<N;
    int arr[N];
    int i=0;
    for(auto val:a){
        arr[i]=val;
        i++;
    }

    int n=i-1;

    
    
}

int main(){
    // int n, k; cin>>n>>k;
    // vector<int> v;
    // for(int i =0 ;i <n;i++) {
    //     int x; cin>>x;
    //     v.push_back(x);
    // }
    //int x = longestSubarrayWithSumK(v,k);
    cout<<"OK";
    return 0;
}