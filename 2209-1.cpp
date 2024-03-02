#include<bits/stdc++.h>
using namespace std;

int n,m;
const int N=25;
int a[N];
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        cout<<m%a[i]<<" ";
        m/=a[i];
    }
    return 0;
}
