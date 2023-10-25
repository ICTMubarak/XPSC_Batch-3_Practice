#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){

        int n; cin>>n;
        vector<string> v(n);
        map<string, bool> mp;
        
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]=true;
        }

        

        for(int i=0;i<n;i++){
            string oneStr = v[i];
            bool f=false;

            for(int j=1;j<oneStr.size();j++){
                string strFstPart = oneStr.substr(0,j);         
                string strSndPart = oneStr.substr(j,oneStr.length()-1);
                if(mp[strFstPart]&&mp[strSndPart]){
                    f=true;
                    break;
                }
            }

            cout<<f?1:0;
                      
        }
        cout<<endl;

    }

    return 0; 
}