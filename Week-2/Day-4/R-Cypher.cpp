#include<bits/stdc++.h>
using namespace std;

int Lock[10]={0,1,2,3,4,5,6,7,8,9};

int main(){

    int t;cin>>t;
    while (t--){
       int n; cin>>n;
       int L = n;
       int dataArr[L];

       for(int i=0;i<n;i++) cin>>dataArr[i];
       //for(int i=0;i<n;i++) cout<<dataArr[i]<<" ";

        int currentIndx;
       for(int k=0;k<n;k++){
        currentIndx=dataArr[k];
        //cout<<currentIndx<<endl;
        int m;cin>>m; string str; cin>>str;
        for(int i=0;i<m;i++){
            
            if(str[i]=='D'){
                currentIndx++;
                if(currentIndx>9) currentIndx=0;
            }
            if(str[i]=='U'){
                currentIndx--;
                if(currentIndx<0) currentIndx=9;
            }
            //cout<<currentIndx<<" ";
        }
       
        cout<<Lock[currentIndx]<<" ";
       }
       cout<<endl;
    }
    

    return 0; 
}