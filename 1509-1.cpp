#include<bits/stdc++.h>
using namespace std;
int n;
int ans=0;
int tmp=INT_MIN;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=tmp){
            tmp=x;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}