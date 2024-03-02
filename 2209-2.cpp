#include<bits/stdc++.h>
 using namespace std;

 int arr[100005];

 int main(){
    int n,x;
    cin>>n>>x;
    int book[35];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>book[i];
        sum+=book[i];
    }
    int target =sum-x;//转化为背包问题
    arr[0]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = target; j >=book[i]; j++)
        {
            arr[j]=max(arr[j],arr[j-book[i]]+book[i]);
        }
    }
    
    int result =sum-arr[target];
    cout<<result;
    return 0;
 }