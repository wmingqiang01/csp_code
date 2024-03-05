#include<bits/stdc++.h>
using namespace std;

int n,x;

int main(){
    cin>>n;
    int nums[n];
    int count;
    for(int i=0;i<n;i++){
        cin>>x;
        nums[i]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(nums[i]==-nums[j]){
                count++;}
        }
    }

    cout<<count;
    return 0;
}