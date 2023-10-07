#include<bits/stdc++.h>
using namespace std;
int arr1[2502][2502],arr2[2502][2502];

int main(){

        int K, S; cin>>K>>S;
        // int count=0;
        // for(int X=0;X<=K;X++){
        //     for(int Y=0; Y<=K;Y++){
        //         for(int Z=0;Z<=K;Z++){
        //             if(X+Y+Z==S) count++;
        //         }
        //     }
        // }
        // cout<<count;

        // for(int i=2;i<=K;i++){
        //     for(int j=2;j<=K;j++) arr1[i][j]=i+j;
        // }
        // for(int i=2;i<=K;i++){
        //      for(int j=2;j<=K;j++) arr2[i][j]=S-i;
        // }

        int count=0;

        for(int i=2;i<=K;i++){
            for(int j=2;j<=K;j++){
                arr1[i][j]=i+j;
            } 
        }

        for(int i=2;i<=K;i++){
            for(int j=2;j<=K;j++){
                arr2[i][j]=S-j;
            } 
        }
        int count=0;
        for(int i=2;i<=K;i++){
            for(int j=2;j<=K;j++){
                if(arr1[i][j]==arr2[i][j]) count++;
            } 
        }

        cout<<count;
       
  
    return 0;
}