#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n;cin>>n;

        map<string, int> mp;
        map<char, int> mpFirstChar;
        map<char, int> mpSecondChar;

        vector<string> v;

        string str;


        for(int i=0;i<n;i++){
            cin>>str;
           // if(find(v.begin(),v.end(),str)==v.end()){
                v.push_back(str);
           // } 
             mp[str]++;
             mpFirstChar[str[0]]++;
             mpSecondChar[str[1]]++;
        }

        long long int count=0;

        for(auto st:v){
            
        // int x = ((mpFirstChar[st[0]]-mp[st])+(mpSecondChar[st[1]]-mp[st]))-1;
        //     x=max(0,x);
        //     //cout<<st[0]<<mpFirstChar[st[0]]<<" "<<st[1]<<mpSecondChar[st[1]]<<" "<<st<<mp[st]<<" "<<x<<endl;
        //     count = count+x;

        count = count + (mpFirstChar[st[0]]+mpSecondChar[st[1]]) - 2*mp[st];
         //mp[st]++;
         //mpFirstChar[st[0]]++;
         //mpSecondChar[st[1]]++;

        }

        cout<<count/2<<endl;

    }


    return 0; 
}