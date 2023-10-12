#include<bits/stdc++.h>
using namespace std;

int strinToInt(string &s){
    int ans =0;
    for(int i=0;i<(int)s.size();i++)
    ans  = ans*10+(s[i]-'0');
    return ans;
}

int main(){

    string s, a, b;

    cin>>s;
    int x; cin>>x;
    int hr,mn;
    a.push_back(s[0]);
    a.push_back(s[1]);
    b.push_back(s[3]);
    b.push_back(s[4]);
    hr = strinToInt(a);
    mn = strinToInt(b);

    int addHr = x%60, addMin = x%60;
    int tH=hr, tM = mn;
    do{
        hr%= 24;
        mn%=60;
        hr+=addHr;
        mn+= addMin;
         cout<<hr<<" "<<mn<<'\n';
    }while(tH!=hr && tM !=mn);

    

    return 0;
}