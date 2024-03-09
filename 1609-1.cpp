#include<bits/stdc++.h>
using namespace std;
int n;
int flag=INT_MIN;
const int N=1010;
int nums[N];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=1;i<n;i++){
        int tmp=abs(nums[i]-nums[i-1]);
        flag=max(tmp,flag);
    }
    cout<<flag;
    return 0;
}