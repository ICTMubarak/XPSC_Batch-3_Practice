#include<bits/stdc++.h>
using namespace std;

int sum_digit(int n){
    int sum=0;
    while(n){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main(){

    string str; cin>>str;
    int n = str.length();
    //cout<<n<<endl;
    long long int sum=0;
    if(n<2){
        cout<<0; 
        return 0;
    }
    for(int i=0;i<n;i++){
        int x=str[i]-48;
        sum=sum+x;
    }
    int count=1;
    while(sum>9){
        //cout<<sum<<endl;
       count++;
        int x= sum_digit(sum);
        sum=x;
        
    }
    cout<<count;
    return 0; 
}