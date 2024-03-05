#include<bits/stdc++.h>
using namespace std;

int n,score,w;

int main(){
    cin>>n;
    int index=0;
    for(int i=0;i<n;i++){
        cin>>w>>score;
        index+=w*score;
    }
    index = index<0?0:index;
    cout<<index;
    return 0;
}