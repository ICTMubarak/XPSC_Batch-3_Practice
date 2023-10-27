#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string str; cin>>str;
        vector<string> v;
        long long int count =0;
        for(int i=0;i<n-1;i++){
             string subS3=str.substr(i,2);
             sort(subS3.begin(),subS3.end());
            if(find(v.begin(),v.end(),subS3)==v.end()){
                v.push_back(subS3);
                //cout<<subS3<<" ";
                count++;
            }
        }

        cout<<count<<endl;

    }

    return 0; 
}