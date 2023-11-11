#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int> vr(n+1);
        vector<int> prefixSum(n+1);
        int x=0;
        for(int i=1;i<=n;i++){
            cin>>vr[i];
            prefixSum[i]=vr[i]+x;
            x=prefixSum[i];
        }

    vector<int> finalResult;

        for(int i=1;i<=n;i++){
            if(prefixSum[n]%prefixSum[i]==0){
                int val=prefixSum[i],mul=2,preAns=i,l=0;
                for(int k=i+1;k<=n;k++){
                    l++;
                    if(prefixSum[k]==val*mul){
                        preAns=max(preAns,l);
                        l=0;
                        mul++;
                    }
                    i=k-1;
                }
                finalResult.push_back(preAns);
            }
        }

        sort(finalResult.begin(),finalResult.end());
        for(auto vl:finalResult) cout<<vl<<" ";
         cout<<finalResult[0]<<'\n';
    }

    return 0;
}