#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 1010;
int num[N];
int ans=0;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for(int i=1;i<n-1;i++){
        if((num[i]-num[i-1])*(num[i+1]-num[i])<0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
