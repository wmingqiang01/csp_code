#include<bits/stdc++.h>
using namespace std;
int n;
int ans=0;

int main(){
    cin>>n;
    while(n-50>=0){
        ans+=7;
        n-=50;
    }
    while(n-30>=0){
        ans+=4;
        n-=30;
    }
    if(n>0){
        ans+=(n/10);
    }
    cout<<ans;
    return 0;
}