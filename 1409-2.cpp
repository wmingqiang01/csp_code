#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    int ans=0;
    int img[110][110]={0};
    int x1,y1,x2,y2;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1;j<x2;j++){
            for(int p=y1;p<y2;p++){
                img[j][p]=1;
            }
        } 
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            ans+=img[i][j];
        }
    }
    cout<<ans;
    return 0;
}