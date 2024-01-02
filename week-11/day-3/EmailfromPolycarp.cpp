#include<bits/stdc++.h>
using namespace std;


bool isSubsequence(const string& str1, const string& str2) {
    int i = 0, j = 0;
    while (i < str1.length() && j < str2.length()) {
        if (str1[i] == str2[j]) {
            i++;
        }
        j++;
    }
    return (i == str1.length());
}


int main(){

    int t; cin>>t;
    while(t--){

        string str1,str2; cin>>str1>>str2;

        map<char, int> mp1,mp2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<str1.length();i++){
            mp1[str1[i]]++;
            if(mp1[str1[i]]==1) cnt1++;
        }

        for(int i=0;i<str2.length();i++){
            mp2[str2[i]]++;
            if(mp2[str2[i]]==1) cnt2++;
        }

       if(cnt1==cnt2){
         if (isSubsequence(str1, str2)) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
       }
       else cout<<"NO"<<'\n';
        
        }

    return 0;
}