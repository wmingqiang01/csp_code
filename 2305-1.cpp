#include<bits/stdc++.h>
using namespace std;
string chess;
int n,m;
map<string,int> chesses;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        string str,a;
        for(int j=0;j<8;j++){
            cin>>a;
            str+=a;
        }
        cout<<++chesses[str]<<endl;
    }
    return 0;
}