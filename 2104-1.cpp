#include<bits/stdc++.h>
using namespace std;
int n,m,L;
int x;
int main(){
    cin>>n>>m>>L;
    int img[L]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            img[x]++;
        }
    }
    for(int i=0;i<L;i++){
        cout<<img[i]<<" ";
    }
    return 0;
}