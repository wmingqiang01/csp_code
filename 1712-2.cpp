#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int> q;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    int no=0,head;
    while(!q.empty()){
        head=q.front();
        q.pop();
        no++;
        if(no%k!=0&&no%10!=k)q.push(head);
    }
    cout<<head;
    return  0;
}