#include<bits/stdc++.h>
using namespace std;
int n;
map<int,int> door;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int member;
        cin>>member;
        door[member]++;
        cout<<door[member]<<" ";
    }

}