#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2; cin>>str1>>str2;
    int n = str1.size();
    int count =0;
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]) count++;
    }
    cout<<count;
    return 0; 
}