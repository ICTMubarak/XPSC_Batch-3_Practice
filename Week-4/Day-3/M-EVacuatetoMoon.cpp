#include<bits/stdc++.h>
using namespace std;

bool descendingSort(int a, int b) {
    return a > b;
}

int main(){

    int t;cin>>t;

    while(t--){

        int n,m,h;cin>>n>>m>>h;
    vector<int> cars(n),charger(m);
    for(int i=0;i<n;i++) cin>>cars[i];
    for(int i=0;i<m;i++) cin>>charger[i];
    sort(cars.begin(),cars.end(), descendingSort);
    sort(charger.begin(),charger.end(), descendingSort);

    int connection = min(n,m);
    

    for(auto v:cars) cout<<v<<" ";

    cout<<'\n';

    }

    

    return 0;
}