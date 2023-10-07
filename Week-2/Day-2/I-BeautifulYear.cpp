#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;

    for(int i=n+1;;i++){
        int a=i/1000,b=(i/100)%10,c=(i/10)%10,d=i%10;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

        if(a!=b&&b!=c&&c!=d&&d!=a&&d!=b&&a!=c){
            cout<<i;
            break;
        }
    }

    return 0;
}