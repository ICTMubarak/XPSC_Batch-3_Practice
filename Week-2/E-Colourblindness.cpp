#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string str1,str2; cin>>str1>>str2;
        int check = 0;
        for(int i=0;i<n;i++){
            char ch1=str1[i], ch2= str2[i];
            if(ch1=='G'||ch1=='B') ch1='M';
            if(ch2=='G'||ch2=='B') ch2='M';
            if(ch1!=ch2){
                check = 1;
                break;
            } 
        }
        if(check==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}