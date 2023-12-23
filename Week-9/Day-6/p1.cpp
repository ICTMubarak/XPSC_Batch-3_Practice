#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        long long int sum=0;
        for(int i=0;i<str.length();i++){
            sum=sum+str[i]-'0';
        }
        if(sum%3==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
