#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;cin>>a>>b>>c;
    int check = 0 ;
    for(int i=0;i<=c;i++){
        for(int j=0;j<=c;j++){
            if(a*i+b*j==c||a*j+b*i==c){
                cout<<"Yes";
                check=1;
                return 0;
            }
        }
    }

    if(check==0) cout<<"No";

    // for (int i = 0; i <= c / a; i++) {
    //     int r = c - i * a;
    //     if (r % b == 0) {
    //         cout << "Yes" << endl;
    //         return 0;
    //     }
    // }

    // cout << "No" << endl;
    return 0; 
}