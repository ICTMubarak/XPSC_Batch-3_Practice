#include<bits/stdc++.h>
using namespace std;
int const N = 1e5+1;
int globalArray[N];

void resetGolovalArray(){
    for(int i=0;i<=N;i++) globalArray[i]=0;
}

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        if(n<3) {
            if(n==1) cin>>n;
            if(n==2) cin>>n>>n;
            cout<<-1<<endl; continue;
        }
        else{
            //int localArray[n];
            int chack=0;
            for(int i=0;i<n;i++){
                int val; cin>>val;
                globalArray[val]++;
                //localArray[i]=val;
               // cout<<val<<" ";
               if(chack==1) continue;
                if(globalArray[val]>2){
                    cout<<val<<endl;
                    // for(int j=0;j<=i;j++){
                    //     globalArray[localArray[j]]=0;
                    // }
                    
                    chack = 1;
                }
            }
            if(chack==0){
                cout<<-1<<endl;
            }
        }
        resetGolovalArray();
    }

    return 0;
}