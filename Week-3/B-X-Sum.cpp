#include<bits/stdc++.h>
using namespace std;

int sumDiagonal(int i, int j, int m, int n, int b[]){
    int  sum=0;

    for(int x=i,y=j;x>-1&&y>-1;x--,y--){
        sum=sum+b[x];
    }

    return sum;

}

int main(){

    int t;cin>>t;
    while(t--){
        int m,n; cin>>m>>n;
        int a[m][n];

        int bb[2][2]={3,2,4,5};

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x; cin>>x;
                a[i][j]=x;
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<sumDiagonal(i,j,m,n,bb);
            }
            cout<<endl;
        }

        
    }

    return 0;
}