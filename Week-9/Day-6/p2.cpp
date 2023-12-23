#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        if(str.length()==14){
            bool f=true;
            if(str[0]!='+'&&str[1]!='8'&&str[2]!='8'&&str[3]!='0'&&str[4]!='1') f=false;
            if((str[5]<'2'||str[5]>'9')) f=false;
            // for(int i=6;i<14;i++){
            //     if(str[i]<'0'||str[i]>'9'){
            //         f=false;
            //         break;
            //     }
            // }

            if(f) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    return 0;
}
