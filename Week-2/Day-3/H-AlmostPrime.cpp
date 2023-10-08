#include<bits/stdc++.h>
using namespace std;

bool primeCheck[3001];

bool isPrime(int n){
    if (n==2||n==3) return true;
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0) return false;
        }
    }
    return true;
}

int main(){

    for(int i=2;i<=3000;i++){
        bool checked = isPrime(i);
        primeCheck[i]=checked;
    }

    // for(int i=2;i<=3000;i++){
    //     if(primeCheck[i]) cout<<i<<endl;
    // }

    int val;cin>>val;

    

    int alMostPrime=0;
    for(int i=6;i<=val;i++){
        int count =0 ;
        for(int j=2;j<=i;j++){
            if(i%j==0&&primeCheck[j]) count++;
        }

        if(count==2) {
            alMostPrime++;
           // cout<<i<<endl;
        }
        
        
    }

    cout<<alMostPrime;

    

    return 0; 
}