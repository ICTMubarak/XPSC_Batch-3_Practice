#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        int m,n; cin>>m>>n;
        int arr[m][n];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x; cin>>x;
                arr[i][j]=x;
            }
        }

        if(n==1){
            int mx=0;
             for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]>mx) mx=arr[i][j];
            }
        }
        cout<<mx<<endl;
        continue;
        }

        else{
                  int mxSum = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               
               int sum=0;
                for(int a=i,b=j;a>=0&&b>=0;a--,b--) {sum+=arr[a][b];}
                for(int a=i+1,b=j+1;a<=m-1&&b<=n-1;a++,b++) {sum+=arr[a][b];}
                if(i-1>-1) {for(int a=i-1,b=j+1;a>=0&&b<=n-1;a--,b++) {sum+=arr[a][b];}}
                if(j-1>-1){for(int a=i+1,b=j-1;a<=m-1&&b>=0;a++,b--) {sum+=arr[a][b];}}

                //cout<<i<<j<<"="<<sum<<" ";
                if(sum>mxSum) mxSum=sum;

            }
           // cout<<endl;
        }
        cout<<mxSum<<endl;
        
    }
        }


  

    return 0;
}