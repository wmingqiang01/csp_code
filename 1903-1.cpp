#include<bits/stdc++.h>
using namespace std;

int n;
const int N=100010;
int nums[N]={100000010};
int max_num=INT_MIN,min_num=INT_MAX;
int middle;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums, nums+n);
    cout<<nums[n-1]<<" ";
    if(n%2==0){
        middle=round((nums[n/2]+nums[n/2+1])/2);
        cout<<middle<<" ";
    }else cout<<nums[(n+1)/2]<<" ";
    cout<<nums[0];
    return 0;
}