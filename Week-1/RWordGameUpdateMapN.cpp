#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        map<string, int> mp;
        vector<string> v1, v2, v3;
        
        for(int i=0;i<n*3;i++){
            string str; cin>>str;
            if(i<3) v1.push_back(str);
            else if(i<6) v2.push_back(str);
            else v3.push_back(str);

            if(mp[str]==0) mp[str]=3;
            else if(mp[str]==3) mp[str]=1;
            else mp[str]=0;
        }

        for(auto s:v1){
            cout<<mp[s]<<" ";
            cout<<"OK";
        }
        cout<<endl;

        for(auto s:v2){
            cout<<mp[s]<<" ";
        }
        cout<<endl;

        for(auto s:v3){
            cout<<mp[s]<<" ";
        }
        cout<<endl;

    }

    return 0;
}

//map<string,vector<int>> mp
