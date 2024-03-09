#include<bits/stdc++.h>
using namespace std;
int n;
const int N=1010;
int prices[N];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<(prices[0]+prices[1])/2<<" ";
    for(int i=1;i<n-1;i++){
        cout<<(prices[i]+prices[i+1]+prices[i-1])/3<<" ";
    }
    cout<<(prices[n-1]+prices[n-2])/2<<" ";
    return 0;
}