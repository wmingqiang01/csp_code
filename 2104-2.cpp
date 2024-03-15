#include<bits/stdc++.h>
using namespace std;

int n,L,r,t;
int main(){
    cin>>n>>L>>r>>t;
    int img[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>img[i][j];
    }
    for(int i=r;i<=n-r;i++){
        for(int j=r;j<=n-r;j++){
            int sum=0;
            for(int k=i-r;k<=i+r;k++){
                for(int l=j-r;l<=j+r;l++){
                    sum+=img[k][l];
                    int aver=sum/(r*r);
                }
            }
            if(sum==t){
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
    }
    
}

