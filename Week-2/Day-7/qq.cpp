#include<bits/stdc++.h>
using namespace std;
 
int stringConvert(string &s){
    int ans =0;
    for(int i=0;i<(int)s.size();i++)
    ans  = ans*10+(s[i]-'0');
    return ans;
}
 
int palendrom(int h, int m){
 
    if(h%10==m/10&&h/10==m%10) return 1;
    else return 0;
}
 
int main(){

        ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int Q; cin>>Q;
    while(Q--){
        string s, a, b;
        cin>>s;
        int x; cin>>x;
        int hrs,mnt;
        a.push_back(s[0]);
        a.push_back(s[1]);
        b.push_back(s[3]);
        b.push_back(s[4]);
        hrs = stringConvert(a);
        mnt = stringConvert(b);
 
       int addHr = x/60, addMin = x%60;
       int tH=hrs, tM = mnt;
      
       int count=0;
        count = count + palendrom(hrs, mnt);
        hrs=hrs+addHr;
        mnt=mnt+ addMin;
        hrs%= 24;
        hrs+=(mnt/60);
        hrs%= 24;
        mnt%=60;
 
        while(1){
       if(tH==hrs && tM==mnt) break;
        count = count + palendrom(hrs, mnt);
            
        hrs=hrs+addHr;
        mnt=mnt+ addMin;
        hrs%= 24;
        hrs+=(mnt/60);
        hrs%= 24;
        mnt%=60;


 
    }
    cout<<count<<endl;
    }
    return 0;
}