#include<bits/stdc++.h>
using namespace std;

int main(){

    int A,B,C,temp; cin>>A>>B>>C;
    int check = 0;
    for(int i = C; i <= B; i=i+C){
        if(i>=A&&i<=B){
            cout<<i;
            check=1;
            break;
        }
    }
    if(check==0)
    cout<<-1;
    
    return 0;
}