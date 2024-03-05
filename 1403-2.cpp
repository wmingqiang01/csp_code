#include<bits/stdc++.h>
using namespace std;

const int w=2600;
const int h=1500;
int n,m;
int x1,x2,yy1,y2;
int x,y;

map<int,pair<pair<int,int>,pair<int,int>>> window;
int home[w][h];

void draw(int x1,int yy1,int x2,int y2, int layer){
    for(int i=x1;i<x2;i++){
        for(int j=yy1;j<y2;j++){
            home[i][j]=layer;
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x1>>yy1>>x2>>y2;
        pair<int,int> position1=make_pair(x1,yy1);
        pair<int,int> position2=make_pair(x2,y2);
        window[i]=make_pair(position1,position2);
        draw(x1,yy1,x2,y2,i+1);
    }
    for(int j =0;j<m;j++)
    {
        cin>>x>>y;
        int layer=home[x][y];
        if(layer==0){
            cout<<"IGNORED"<<endl;
        }else{
            cout<<layer<<endl;
            draw(window[layer].first.first,window[layer].first.second,window[layer].second.first,window[layer].second.second,layer);
        }
    }
    return 0;
    
}
