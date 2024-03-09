#include<bits/stdc++.h>
using namespace std;
int n;
int r,g,y;
int total;
int tme;
int flag;
int main(){
    cin>>r>>y>>g>>n;
    for(int i=0;i<n;i++){
        cin>>flag>>tme;
        switch (flag)
        {
        case 0:
            total+=tme;
            break;
        case 1:
            total+=tme;
            break;
        case 2:
            total+=(tme+r);
            break;
        case 3:
            break;
        default:
            break;
        }
    }
    cout<<total;
    return 0;
}