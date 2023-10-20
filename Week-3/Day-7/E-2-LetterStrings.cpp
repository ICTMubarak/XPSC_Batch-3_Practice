#include<bits/stdc++.h>
using namespace std;

int f(string firstString, queue<string> q){
int count = 0 ;
while (!q.empty()){
    string strAfter = q.front();
    q.pop();
    if((firstString[0]==strAfter[0]&&firstString[1]!=strAfter[1])||(firstString[0]!=strAfter[0]&&firstString[1]==strAfter[1]))
    count++;
}

return count;

}

int main(){

       ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        int k,count=0;cin>>k;
        queue<string> q;
        while(k--){
            string str; cin>>str;
            q.push(str);
        }

        while(!q.empty()){
            string firstString=q.front(); 
            q.pop();
            count = count + f(firstString, q);
        }
        cout<<count<<endl;
    }

    return 0; 
}