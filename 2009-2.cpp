#include <bits/stdc++.h>
using namespace std;
int n, k, t, xl, yd, xr, yu;
int x, y;
int stay=0;
int pass=0;
bool pin=false;

int main()
{   
    cin>>n>>k>>t>>xl>>yd>>xr>>yu;
    bool stay_b=false;
    for (int i = 0; i < n; i++)
    {   
        int flag[t]={0};
        int num=0;
        for (int j = 0; j < t; j++)
        {
            cin >> x >> y;
            if (x >= xl && x <= xr && y >= yd && y <= yu)
            {
                flag[j]=1;
                stay_b=true;
            }
        }
        for(int j=0;j<t;j++){
            if(flag[j]==1){
                num++;
                pin=true;
                if(num>=k){
                    stay++;
                    break;
                }
            }
            if(flag[j]==0){
                pin=false;
                num=0;
            }
        }
        if(stay_b){
            pass++;
            stay_b=false;
        }
    }
    cout<<pass<<endl<<stay;
}
