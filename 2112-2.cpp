#include<bits/stdc++.h>
using namespace std;
int n,N;
int main()
{
    cin>>n>>N;
    int a[N]={0};
    int mun[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mun[i];
    }
    for (int i = 0; i < n; i++)
    {
        for(int j=mun[i];j<N;j++){
            a[j]++;
        }
    }
    int g;
    int r=N/(n+1);
    int ans=0;
    for(int i=0;i<N;i++){
        g=i/r;
        ans+=abs(g-a[i]);
    }
    cout<<ans<<endl;
    return 0;
    
    
}