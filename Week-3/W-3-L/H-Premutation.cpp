#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        
        int n; cin>>n; 
        int arr[n][n-1];    
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                int x;cin>>x;
                arr[i][j]=x;
            }
        }

       

        map<int, int> mp;
        for(int i=0,j=0;i<n;i++){
            int y=arr[i][j];
            mp[y]++;
        }
        int fst, snd;
        for(int i=0,j=0;i<n;i++){
            int y=arr[i][j];
            if(mp[y]==n-1) fst=y;
            if(mp[y]==1) snd=y;
        }

        cout<<fst<<" ";

        for(int i=0,j=0;i<n;i++){
            if(snd==arr[i][j]){
                for(int k=i,j=0;j<n-1;j++){
                    cout<<arr[k][j]<<" ";
                }
            }
        }

         cout<<endl;


    }       
    
    return 0; 
}