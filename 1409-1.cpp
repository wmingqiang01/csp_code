#include<bits/stdc++.h>
using namespace std;
int n;
int ans=0;
vector<int> nums;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1]==1)ans++;
    }
    cout<<ans<<endl;
}