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

    vector<int> tempResult;
    vector<int> finalResult;

        for(int i=1;i<=n;i++){
            if(prefixSum[n]%prefixSum[i]==0){
                int val=prefixSum[i],mul=2,preAns=i,l=0, k=i+1;
                for(k;k<=n;k++){
                    l++;
                    if(prefixSum[k]==val*mul){
                        preAns=max(preAns,l);
                        l=0;
                        mul++;
                    }
                }
               if(prefixSum[k-1]==val*(mul-1)) tempResult.push_back(preAns);
            }
            sort(tempResult.begin(),tempResult.end());   
        }

       cout<<tempResult[0]<<'\n';
    }

    return 0;
}