#include<bits/stdc++.h>
using namespace std;

int n,m;
map<int,int> nums;

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        nums[m]++;
    }
    int max=0;
    int ans;
    
    for(map<int,int>::iterator it=nums.begin();it!=nums.end();it++){
        if(it->second>max){
            max=it->second;
            ans=it->first;
        }
    }
    cout<<ans;
    return 0;
}



