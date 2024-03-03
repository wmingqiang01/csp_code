#include<bits/stdc++.h>
using namespace std;
int n,L,s;
int x,y;
vector<pair<int,int>> maps;

int compare(vector<pair<int,int>>& a,vector<pair<int,int>>& b){
    int s1=a.size();
    int count=0;
    int s2=b.size();
    for(int i=0;i<s1-s2;i++){
        for(int j=i;j<s2;j++){
            if(a[j]!=b[j])break;
            if(j==s2-1)count++;
        }
    }
    return count;
}

 int main(){
    cin>>n>>L>>s;
    for(int i=0;i<=n;i++){
        cin>>x>>y;
        maps.push_back(make_pair(x,y));
    }
    vector<pair<int,int>> s_map;
    for(int i=0;i<=s;i++){
        for(int j=0;j<s;j++){
            int cur;
            cin>>cur;
            if(cur==1){
                s_map.push_back(make_pair(i,j));
            }
        }
    }
    cout<<compare(maps,s_map);
    return 0;


 }