#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        
       map<int, string> mp;

        for(int i=0;i<n;i++){
            cin>>mp[i];
        }

        int final_min=INT_MAX;
        for(int i=0;i<n;i++){
            int min=INT_MAX;
            string str1, str2;
            str1 = mp[i];
            for(int j=i+1;j<n;j++){
                str2 =mp[j];
                int sum=0;
                for(int k=0;k<m;k++){
                    int x;
                    if(str1[k]-str2[k]>-1) x=str1[k]-str2[k];
                    else x=str2[k]-str1[k];
                    sum=sum+x;
                }
                if(sum<min) min = sum;
            }
            if(final_min>min) final_min=min;
        }

        cout<<final_min<<endl;

    }

    return 0;
}