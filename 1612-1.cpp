#include<bits/stdc++.h>
using namespace std;

int n;
int wrong=-1;
const int N=1010;
int nums[N]={INT_MAX};
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums,nums+N);
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            nums[i]=INT_MAX;
            n--;
        }
    }
    if(n%2==0){
        cout<<wrong;
        return 0;
    }
    sort(nums,nums+N);
    cout<<nums[(n+1)/2];
    return 0;
    
}