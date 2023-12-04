#include<bits/stdc++.h>
using namespace std;
int main(){

    string str; cin>>str;

    int l =str.length();
    cout<<l<<'\n';
     map<char, int> mp;
     vector<char> v;

     for(int i=0;i<l;i++){
        mp[str[i]]++;
        if(find(v.begin(),v.end(),str[i])==v.end()) v.push_back(str[i]);
     }
    char ch;
    bool f=true, fch=false;
     for(auto val:v){
        if(mp[val]==1){
            ch=val;
            fch=true;
            mp.erase(val);
            continue;
        }
        if(mp[val]%2==1) f=false;
     }
vector<char> res(l);

for(auto val:v) cout<<val;

      if(f){
        cout<<"OK";
        //  if(fch){
        //     res[l/2]=ch;
        //     int i=0, j=l-1;
        //     for(auto val: v){
               
                // if(mp[val]){
                //     cout<<"OK";
                //     while(mp[val]){
                //         res[i]=val;
                //         res[l]=val;
                //         mp[val]=mp[val]-2;
                //         if(mp[val]>1){
                //             i++;
                //             j--;
                //         }
                //     }
                // }
            }
         
       //  else{

    //         int i=0, j=l-1;
    //         for(auto val: v){
    //             if(mp[val]){
    //                 while(mp[val]){
    //                     res[i]=val;
    //                     res[l]=val;
    //                     mp[val]=mp[val]-2;
    //                     if(mp[val]>1){
    //                         i++;
    //                         j--;
    //                     }
    //                 }
    //             }
    //         }

     //   }

         for(int i=0;i<l;i++) cout<<res[i];

      }

     //else cout<<"NO SOLUTION"<<'\n';


    return 0;
}