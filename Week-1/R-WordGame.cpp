#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n;cin>>n;
        vector<string> str1, str2, str3;
        int count1=0,count2=0,count3=0;
        for(int i=0;i<n;i++) {
            string str; cin>>str;
            str1.push_back(str);
        }
        for(int i=0;i<n;i++) {
            string str; cin>>str;
            str2.push_back(str);
        }
        for(int i=0;i<n;i++) {
            string str; cin>>str;
            str3.push_back(str);
        }

        for(auto s:str1){
            string fs = s;
            auto f2=find(str2.begin(),str2.end(),fs);
            auto f3=find(str3.begin(),str3.end(),fs);
            if(f2==str2.end()&&(f3==str3.end())) count1=count1+3;
            else if(f2==str2.end()||(f3==str3.end())) count1=count1+1;
            else ;
        }

        for(auto s:str2){
            string fs = s; 
            auto f1=find(str1.begin(),str1.end(),fs);
            auto f3=find(str3.begin(),str3.end(),fs);
            if(f1==str1.end()&&(f3==str3.end())) count2=count2+3;
            else if(f1==str1.end()||(f3==str3.end())) count2=count2+1;
            else ;
        }

        for(auto s:str3){
            string fs = s; 
            auto f1=find(str1.begin(),str1.end(),fs);
            auto f2=find(str2.begin(),str2.end(),fs);
            if(f1==str1.end()&&(f2==str2.end())) count3=count3+3;
            else if(f1==str1.end()||(f2==str2.end())) count3=count3+1;
            else ;
        }
        cout<<count1<<" "<<count2<<" "<<count3<<endl;

    }
    return 0;
}