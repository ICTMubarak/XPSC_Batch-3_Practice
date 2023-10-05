#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        map<string, int> mp;
        vector<string> v1, v2, v3;
        int m=n*3;
        for(int i=0;i<m;i++){
            string str; cin>>str;
            if(i<m/3) v1.push_back(str);
            else if(i<m*2/3) v2.push_back(str);
            else v3.push_back(str);

            if(mp[str]==0) mp[str]=3;
            else if(mp[str]==3) mp[str]=1;
            else mp[str]=0;
        }
        int sum1=0;
        for(auto s:v1){
            sum1=sum1+mp[s];
        }
        int sum2=0;

        for(auto s:v2){
            sum2=sum2+mp[s];
        }
        int sum3=0;

        for(auto s:v3){
            sum3=sum3+mp[s];
        }
        cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    }

    return 0;
}

//map<string,vector<int>> mp
