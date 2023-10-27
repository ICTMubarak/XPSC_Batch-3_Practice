#include<bits/stdc++.h>
using namespace std;

int main(){

        int t; cin>>t;

        while (t--){
            int n;cin>>n;
            vector<int> v(n),vEven, vOdd;
            for(int i=0;i<n;i++){
                cin>>v[i];
                if(v[i]%2==0) vEven.push_back(v[i]);
                else vOdd.push_back(v[i]);
            }

            sort(vEven.begin(),vEven.end());
            sort(vOdd.begin(),vOdd.end());

            bool fE=true, fO = true;

            for(int i=0;i<n;i++){
                if(v[i]%2==0) continue;
                else{
                    if(!vOdd.empty()&&vOdd[0]>=v[i]){
                        fE=false;
                        break;
                    }
                }
            }

            for(int i=0;i<n;i++){
                if(v[i]%2==1) continue;
                else{
                    if(!vOdd.empty()&&vOdd[0]>=v[i]){
                        fO=false;
                        break;
                    }
                }
            }

            if(fE||fO) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
        



    return 0;
}