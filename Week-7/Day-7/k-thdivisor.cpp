#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<long long int> divisior;

    long long int n, k; cin>>n>>k;

    for(long long int i=1;i*i<=n;i++){
if(n%i==0){
divisior.push_back(i);
if(n/i!=i) divisior.push_back(n/i);

}
}

sort(divisior.begin(),divisior.end());

long long int position=0;
bool f=true;
for(auto d:divisior){
    position++;
    if(position==k){
        cout<<d;
        f=false;
        break;
    }
}

if(f) cout<<-1;
    

    return 0;
}