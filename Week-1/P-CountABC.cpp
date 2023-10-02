#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;
    string str; cin>>str;
    int count=0;
    for(int i=0;str[i]!=NULL;i++){
        if(str[i+2]!=NULL && str[i]=='A'&&str[i+1]=='B'&&str[i+2]=='C'){
            count++;
            i=i+2;
        }
    }
    cout<<count;

    return 0;
}