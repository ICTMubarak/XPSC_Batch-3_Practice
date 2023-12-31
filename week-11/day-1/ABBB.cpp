#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){

        string str; cin>>str;
        bool f=true;
        while(f){
            f=false;
            int l=str.length();
            for(int i=0;i<l-1;i++){
                if((str[i]=='A'&&str[i+1]=='B')||(str[i]=='B'&&str[i+1]=='B')){
                    str.erase(i,2);
                    f=true;
                    break;
                }
            }
        }

        cout<<str.length()<<'\n';
    }
    


    return 0;
}