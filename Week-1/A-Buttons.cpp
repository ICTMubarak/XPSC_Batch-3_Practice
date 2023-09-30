#include<bits/stdc++.h>
using namespace std;

int main(){

    int A,B,Result; cin>>A>>B;

    Result = (A*2-1>B*2-1)?((A*2-1>(A+B))?A*2-1:(A+B)):((B*2-1>(A+B))?B*2-1:(A+B));
   
    cout<<Result;

    return 0;
}