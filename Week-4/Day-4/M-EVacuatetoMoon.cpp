#include<bits/stdc++.h>
using namespace std;

bool compareDescending(int a, int b) {
    return a > b; // Change to a < b for ascending order
}

int main(){

    int t; cin>>t;
    while(t--){
        int n,m,h; cin>>n>>m>>h;
        vector<int> vN(n);
        vector<int> vM(m);

       
        for(int i=0;i<n;i++) cin>>vN[i];
        sort(vN.begin(),vN.end(),compareDescending);
        //cout<<vN[0]<<" "<<vN[1]<<endl;
        for(int i=0;i<m;i++) cin>>vM[i];
        sort(vM.begin(),vM.end(),compareDescending);

        int x = min(n,m);

        

        int sum[x]={0},th=0;
        for(int i=0;i<x;i++){
            if(vN[i]<=vM[i]){
               // cout<<vN[i]<<vM[i]<<endl;
                sum[i]=sum[i]+vN[i];
            }
            else{
                int t=vM[i];
                
                while(th<h){
                    sum[i]+=vM[i];
                    //i++;
                   th++;
                   //cout<<sum<<endl;
                    t=t+vM[i];
                    if(sum[i]>vN[i]){
                        sum[i]=vN[i];
                        break;
                    }
                }
            }
        }
        int s=0;
        for(int i=0;i<x;i++) s+=sum[i];
        cout<<s<<'\n';

    }

    return 0; 
}