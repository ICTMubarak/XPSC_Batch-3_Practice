#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    string str1="mMeEoOwW";

    while(t--){
        int l;cin>>l; string str2;cin>>str2;
        int ch1=0,ch2=0;
        if(str2[0]=='m'||str2[0]=='M') ch1=1;
        if(str2[l-1]=='w'||str2[l-1]=='W') ch2=1;
        if(ch1==0||ch2==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            int temp=0,check=0;
            bool Bt=true;
            for(int i=0;i<7;i=i+2){
                int k=temp,t=0;
                
                while(str1[i]==str2[k]||str1[i+1]==str2[k]){
                    k++;
                    t=1;
                }

                if(t==0) Bt=false;
                
                Bt=Bt*true;
                if(k==l&&Bt){
                    cout<<"YES"<<endl;
                    check=1;
                } 
                temp = k;
            }
            if(check==0) cout<<"NO"<<endl;
        }
    }
    return 0;
}