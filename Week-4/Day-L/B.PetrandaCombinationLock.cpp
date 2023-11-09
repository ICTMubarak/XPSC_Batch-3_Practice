#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    bool f = false;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<(1<<n); i++){
        int ans=0;
        for(int j=0; j<n; j++){
            if((i&(1<<j)) != 0)
                ans = ans+a[j];
            else
                ans = ans-a[j];
        }
        if (ans % 360 == 0){
            f = true;
            break;
        }
    }
    if (f) cout << "YES";
    else cout << "NO";
    
    return 0;
}