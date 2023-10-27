#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        long long int count = 1;
        char c1,c2;

        for(int i = 0;i<n-1;i++){
             if(i==0){
                 c1=s[i];
                 c2=s[i+1];
             }
            else{
                string a,b;
                a.push_back(c1);
                a.push_back(c2);
                
                b.push_back(s[i]);
                b.push_back(s[i+1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                //cout<<a<<" "<<b<<'\n';
                if(a!=b) count++;
                c1=s[i];
                c2=s[i+1];
            }
        }
       
       cout<<count<<'\n';

    }

    return 0; 
}