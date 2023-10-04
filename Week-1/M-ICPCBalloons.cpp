#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while (t--){
        int n, count = 0; cin>>n;
        string str; cin>>str;
        vector<char> vc;
        for(int i=0;str[i]!=NULL;i++){
            char ch = str[i];
            auto fnd = find(vc.begin(),vc.end(),ch);
            if(fnd == vc.end()){
                count=count+2;
                vc.push_back(ch);
            }
            else{
                count++;
            }
        }

        cout<<count<<endl;

    }
    


    return 0; 
}