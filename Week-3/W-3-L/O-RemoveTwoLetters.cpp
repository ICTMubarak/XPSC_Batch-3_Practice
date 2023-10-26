#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string str; cin>>str;
        vector<string> v;
        long long int count =0;
        for(int i=0,j=2;j<=n;i++,j++){
            string subS1 = str.substr(0,i);
            string subS2 = str.substr(j,n-j);
            string subS3=subS1+subS2;
            //cout<<subS<<" ";
            if(find(v.begin(),v.end(),subS3)==v.end()){
                v.push_back(subS3);
                //cout<<subS
                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0; 
}