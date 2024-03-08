#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1010;
const int M=1010;
int img1[N][M]={0},img2[N][M]={0};
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>img1[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            img2[m-j+1][i]=img1[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<img2[i][j]<<" ";
        }
        cout<<endl;
    }
}