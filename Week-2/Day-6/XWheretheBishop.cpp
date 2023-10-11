#include<bits/stdc++.h>
using namespace std;
int arr[8][8];

void rest(){
     for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                arr[i][j]=0;
            }
        }
}

int main(){
    int t;cin>>t;
    while (t--){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                char ch; cin>>ch; if(ch=='#') arr[i][j]=1;
            }
        }

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(arr[i][j]==1&&arr[i-1][j-1]==1&&arr[i-1][j+1]==1&&arr[i+1][j-1]==1&&arr[i+1][j+1]==1){
                     cout<<i+1<<" "<<j+1;
                     cout<<endl;
                }
            }
        }
        rest();

    }
    
    return 0;
}