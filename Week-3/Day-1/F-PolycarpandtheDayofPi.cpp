#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    string str1="314159265358979323846264338327";

    while(t--){
        string str2; cin>>str2;
        int i=0;
        for(i=0;i<30;i++){
            if(str1[i]!=str2[i]) break;
        }
        cout<<i<<endl;

    }

    return 0; 
}