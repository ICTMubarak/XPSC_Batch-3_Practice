#include<bits/stdc++.h>
using namespace std;

bool compareDescending(int a, int b) {
    return a > b; // Change to a < b for ascending order
}

int main(){

    int t; cin>>t;
    while(t--){
        int n,m,h; cin>>n>>n>>h;
        vector<int> vN(n);
        vector<int> vM(m);

       
        for(int i=0;i<n;i++) cin>>vN[i];
        sort(vN.begin(),vN.end(),compareDescending);
        for(int i=0;i<m;i++) cin>>vM[i];
        sort(vM.begin(),vM.end(),compareDescending);

        int x = min(n,m);

        //cout<<vM[0];

        int sum=0,th=0;
        for(int i=0;i<x;i++){
            if(vN[i]<=vM[i]){
                sum=sum+vN[i];
            }
            else{
                int t=vM[i];
                while(t<vN[i]&&th<h){
                    sum+=vM[i];
                    //i++;
                   th++;
                   //cout<<sum<<endl;
                    t=t+vM[i];
                }
            }
        }
        cout<<sum<<'\n';

    }

    return 0; 
}