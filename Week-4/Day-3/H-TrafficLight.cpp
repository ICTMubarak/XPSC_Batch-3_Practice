#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--){
        int n;
        char ch;
        string str;
        cin>>n>>ch>>str;
        str+=str;
        str+=str;
        int ans=0, count=0;

        for(int i=0;i<n*2;i++){
            
            if(str[i]==ch){
                for(int j=i;str[j]!='g';j++){
                    count++;
                    i=j+1;
                }
                ans=max(ans,count);
                count=0;
            }
        }

        cout<<ans<<'\n';

    }
    

    return 0;
}