#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n;
        int cntOne=0, cntZoro=0;
        for(int i=0;i<n;i++){
             cin>>x;
            if(x==0) cntZoro++;
            if(x==1) cntOne++;
        }

        if(n%2==1||cntZoro==n||(n==2&&cntOne==2)){
            cout<<-1<<'\n';
            continue;
        }
        else if(cntOne==cntZoro) cout<<0<<'\n';
        else if(cntZoro>cntOne) cout<<(cntZoro-cntOne)/2<<'\n';
        else{
            int cnt=0;
            while(cntOne>cntZoro){
                cnt++;
                cntOne-=2;
                cntZoro+=2;

            }

            if(cntOne==cntZoro) cout<<cnt<<'\n';
            else {
                cout<<cnt+(cntZoro-cntOne)/2<<'\n';
            }
        }

    }


    return 0; 
}