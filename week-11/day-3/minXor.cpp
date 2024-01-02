#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n]; int xr=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        xr=xr^a[i];
	    }

        int ans = xr;

        for(int i=0;i<n;i++){
            ans = min(ans,xr^a[i]);
        }

        cout<<ans<<'\n';

	}
	return 0;
}
