#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string str; cin>>str;
        vector<string> v;
        int count =0;
        for(int i=0,j=2;j<=n;i++,j++){
            string subS = str.substr(i,j-i);
            //cout<<subS<<" ";
            if(find(v.begin(),v.end(),subS)==v.end()){
                v.push_back(subS);
                //cout<<subS
                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0; 
}