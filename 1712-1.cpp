#include<bits/stdc++.h>
using namespace std;
int n;
const int N=1010;
int nums[N];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int tmp=INT_MAX;
    sort(nums,nums+n);
    for(int i=1;i<n;i++){
        if(abs(nums[i]-nums[i-1])<tmp){
            tmp=abs(nums[i]-nums[i-1]);
        }
    }
    cout<<tmp;
    return 0;
}