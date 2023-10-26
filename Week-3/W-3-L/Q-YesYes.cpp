#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Yes";

    for(int i=0;i<50;i++) str+="Yes";

    int t; cin>>t;

    while(t--){
       string str1;
       cin>>str1;



        bool f = false;

        for(int i=0,j=str1.length();i<50;i++,j++){

            string subS=str.substr(i,j-i);
            if(str1==subS){
                f=true;
                break;
            }


        }

       if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


        

    }

    return 0; 
}