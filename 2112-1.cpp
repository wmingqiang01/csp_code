#include<bits/stdc++.h>
using namespace std;
int n,N;

int main(){
    cin>>n>>N;
    int a[N]={0};
    for(int i=0;i<n;i++){
        int flag;
        cin>>flag;
        a[flag]++;
    }
    int sum;
    for(int j=1;j<N;j++){
        a[j]+=a[j-1];
        sum+=a[j];
    }
    cout<<sum<<endl;
    return 0;
}