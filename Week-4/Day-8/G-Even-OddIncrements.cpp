#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<long long int> v(n);
        long long int sumIns=0, countOdd=0,countEven=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sumIns = sumIns+v[i];
            if(v[i]%2==0) countEven++;
            else countOdd++;
        } 

        for(int i=0;i<q;i++){
      
            int check, xj; cin>>check>>xj;
            if(check==0){
                sumIns= sumIns+countEven*xj;
                if(xj%2==1){
                    countOdd=countOdd+countEven;
                    countEven=0;
                }
            }
            
            if(check==1){
                sumIns = sumIns+countOdd*xj;
                if(xj%2==1){
                    countEven=countEven+countOdd;
                    countOdd=0;
                }
            }
            cout<<sumIns<<'\n';
            } 

        
        }
        
    
    return 0;
}