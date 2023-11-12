#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while (t--){
        string str;cin>>str;
        int l=str.length();
        vector<pair<int, char>> v;

        int sum=0,step=0;

    //     if(str[0]<str[l-1]){
    //         for(int i=1;i<l-1;i++){
    //         if(str[0]<=str[i]&&str[i]>=str[l-1]){
    //             v.push_back({i+1,str[i]});
    //         }
    //     }

    //     sort(v.begin(),v.end(),[](pair<int,char> &left, pair<int,char> &right){
    //      return left.second >= right.second;
    //     });

    //     int lnth=v.size();
    //     for(int i=0;i<lnth;i++){
    //     cout<<v[i].second;
    //    }

    //     }



      if(str[0]==str[l-1]){
            for(int i=1;i<l-1;i++){
            if(str[0]==str[i]){
                v.push_back({i+1,str[i]});
            }
        }

        int lnth=v.size();
        cout<<1<<" ";
        for(int i=0;i<lnth;i++){
        cout<<v[i].first<<" ";
       }
       cout<<l;
        }








        if(str[0]>str[l-1]){
            for(int i=1;i<l-1;i++){
            if(str[0]>=str[i]&&str[i]>=str[l-1]){
                v.push_back({i+1,str[i]});
            }
        }

        sort(v.begin(),v.end(),[](pair<int,char> &left, pair<int,char> &right){
         return left.second > right.second;
        });

        int lnth=v.size();
        cout<<1<<" ";
        for(int i=0;i<lnth;i++){
        cout<<v[i].first<<" ";
       }
       cout<<l;
        }





        if(str[0]<str[l-1]){
            for(int i=1;i<l-1;i++){
            if(str[0]<=str[i]&&str[i]<=str[l-1]){
                v.push_back({i+1,str[i]});
            }
        }

        sort(v.begin(),v.end(),[](pair<int,char> &left, pair<int,char> &right){
         return left.second < right.second;
        });

        int lnth=v.size();
        cout<<1<<" ";
        for(int i=0;i<lnth;i++){
        cout<<v[i].first<<" ";
       }
       cout<<l;
        }





        
        
        
    cout<<'\n';  

    }
    

    return 0;
}