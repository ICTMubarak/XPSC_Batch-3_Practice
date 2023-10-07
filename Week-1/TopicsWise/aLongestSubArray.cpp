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
    vector<int> b;
    int sum=0,mx=0;
    for(int i=0,j=0;i<N;){
        sum+=arr[i];
        if(sum==k){
            int subLength;
            if(i==j){
                 subLength=1;
                 mx = max(mx,subLength);
            }
            else{
                subLength = i-j+1;
                mx = max(mx,subLength);
            }
            i++;
        }
        else if(sum>k){
            sum-=arr[j];
            j++;
        }
        else i++;
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