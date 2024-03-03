#include<bits/stdc++.h>
using namespace std;
int n,N;

int main(){
    cin>>n>>N;
    int a[N];
    for(int i=0;i<n;i++){
        int flag;
        cin>>flag;
        a[flag]+=i;
    }
    for(int j=1;j<N;j++){
        a[j]=a[j-1];
    }
    int f;
    for(int i=0;i<N;i++){
        f+=a[i];
    }
    cout<<f<<endl;
    return 0;
}