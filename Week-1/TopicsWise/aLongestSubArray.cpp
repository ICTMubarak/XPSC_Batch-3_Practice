#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {

    int N =  a.size();
    int arr[N];
    int i=0;
    for(auto val:a){
        arr[i]=val;
        i++;
    }
    vector<int> v;
    int sum=0;
    for(int i=0,j=0;i<N;){
        sum=sum+arr[i];
       if(sum==k){
            int sl=i-j+1;
            v.push_back(sl);
            i++;
       }
       else if(sum>k){
            sum=sum-arr[j];
            j++;
       }
       else{
            i++;
       }
    }

    int mx=0;
    for(auto m:v){
        cout<<m<<" ";
        if(m>mx) mx=m;
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

    cout<<longestSubarrayWithSumK(v,k);
    return 0; 
}