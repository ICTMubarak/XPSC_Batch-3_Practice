#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
        long long int n; cin>>n; 
        long long int resultArr[n]={0};
        string str; cin>>str;
 
        long long int mx=0;

        int contributarCount = 0;
        vector<int> contributerAmount;

        for(int i=0;i<n;i++){
            
            int left=0, right=0;
            left = i; right=n-i-1;

            if(str[i]=='L'){
                if(right>left){
                    contributarCount++;
                    contributerAmount.push_back(right-left);
                }
                
            }
            if(str[i]=='R'){
                if(left>right){
                    contributarCount++;
                    contributerAmount.push_back(left-right);
                }
                
            }

            mx=mx+max(left,right);

        }

        sort(contributerAmount.begin(),contributerAmount.end());

        
            for(int i=n-1;i>=contributarCount-2;i--){
                resultArr[i]=mx;
            }

            contributarCount--;

            

            if(contributarCount){
                for(auto v:contributerAmount){
                resultArr[contributarCount-1]=mx-v;
                mx=mx-v;
                contributarCount--;
            }

            }

            

         for(int i=0;i<n;i++){
                cout<<resultArr[i]<<" ";
                //cout<<i<<endl;
            }

        cout<<endl;
    }
    

    return 0;
}