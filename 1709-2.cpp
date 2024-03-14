#include<bits/stdc++.h>
using namespace std;

struct teacher
{
    int start;
    int duration;
};


int main(){
    int n,k;
    cin>>n>>k;
    vector<teacher> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].start>>v[i].duration;
    }
    vector<int> keys(k+1,0);
    for (int i = 1; i <= k+1; i++)
    {
        keys[i]=i;
    }
    
    
}