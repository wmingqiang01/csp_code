#include<bits/stdc++.h>
using namespace std;

int n,a,b;
int in;
int main(){
    cin>>n>>a>>b;
    int arr_a[n]={0},arr_b[n]={0};
    for(int i=0;i<a;i++){
        cin>>in>>arr_a[in-1];
    }
    for(int i=0;i<b;i++){
        cin>>in>>arr_b[in-1];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr_a[i]*arr_b[i];
    }
    cout<<sum;
}