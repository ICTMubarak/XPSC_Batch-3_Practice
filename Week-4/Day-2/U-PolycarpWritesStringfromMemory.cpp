#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while (t--){
        string str; cin>>str;
        set<char> st;
        int ans=0;
        for(int i=0;str[i]!=NULL;i++){
            if(st.find(str[i])==st.end())
            st.insert(str[i]);

            int sz=st.size();
          
            if(sz==3){
                while(sz==3){
                    i++;
                    if(st.find(str[i])==st.end())
                    st.insert(str[i]);
                    sz=st.size();
                }
                ans++;
                i--;
                st.clear();
            }

        }
        
        if(!st.empty()) ans++;

        cout<<ans<<'\n';
        
    }
    
    return 0;
}