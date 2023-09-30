#include<bits/stdc++.h>
using namespace std;

int main(){

    int A,B,C; cin>>A>>B>>C;
    if(A<=C*2 && B>=C){
        int check = 0;
        for(int i = C*2; i <B;i=i+C){
            cout<<i; 
            check = 1;
            break;
        }
        if(check==0) cout<<-1;
        
    }
    else cout<<-1;
    return 0;
}