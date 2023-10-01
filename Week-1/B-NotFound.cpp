#include<bits/stdc++.h>
using namespace std;

int arr[26];


int main(){

    string str; cin>>str;

    for(int i = 0; str[i]!=NULL;i++){
       //cout<<str[i]-97<<endl;
       arr[str[i]-97]=1;
       //cout<<str[i];
    }
    int k;
    for(k=0;k<26;k++){
        if(arr[k]==0){
            char c = (char)(k+97);
            cout<<c; break;
        } 
    //cout<<arr[k]<<endl;
    }
    if(k==26) cout<<"None";

    return 0;
}