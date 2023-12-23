#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int cntZ=0, cntNZ=0;
        vector<int> vEvn, vOd;
        int x;

        for(int i=0;i<n;i++) {
            cin>>x;
            if(x%2==0) vEvn.push_back(x);
            else vOd.push_back(x);
        }

        sort(vEvn.rbegin(),vEvn.rend());
        sort(vOd.rbegin(),vOd.rend());
       
        queue<int> qEvn,qOd;
        for(int i=0;i<vEvn.size();i++){
            qEvn.push(vEvn[i]);
        }
        for(int i=0;i<vOd.size();i++){
            qOd.push(vOd[i]);
        }


        long long int sumEvn=0, sumOd=0;
        while(!qEvn.empty()&&!qOd.empty()){
            sumEvn+=qEvn.front();
            qEvn.pop();
            sumOd+=qOd.front();
            qOd.pop();
        }

        //cout<<sumEvn<<" "<<sumOd<<" o";

        if(qOd.empty()){
            while(!qEvn.empty()){
                sumOd+=qEvn.front();
                qEvn.pop();
                if(!qEvn.empty()){
                    sumEvn+=qEvn.front();
                    qEvn.pop();
                }
                
            }    
    }

       if(qEvn.empty()){
            while(!qOd.empty()){
                sumOd+=qOd.front();
                qOd.pop();
            }
        }
        //cout<<sumEvn<<" "<<sumOd;
        if(sumEvn>sumOd) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0; 
}