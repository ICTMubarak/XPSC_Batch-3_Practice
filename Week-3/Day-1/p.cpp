#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    map<char, int> mp;
    
    //cout<<x<<endl;
    while (t--){
        mp['T']=0; mp['i']=0; mp['m']=0;mp['u']=0; mp['r']=0;
        //cout<<mp['T']<<mp['i']<<mp['m']<<mp['u']<<mp['r']<<endl;
        int n;cin>>n; string str1; cin>>str1;
        n=str1.length();
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            mp[str1[0]]++;mp[str1[1]]++;mp[str1[2]]++;mp[str1[3]]++;mp[str1[4]]++;
            if(mp['T']==1&&mp['i']==1&&mp['m']==1&&mp['u']==1&&mp['r']==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
           // cout<<str1;
            //cout<<mp[str1[0]]<<mp[str1[1]]<<mp[str1[2]]<<mp[str1[3]]<<mp[str1[4]]<<endl;
        }
    }
    
    return 0;
}