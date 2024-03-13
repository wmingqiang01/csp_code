#include<bits/stdc++.h>
using namespace std;
double rate[8]={1,0.97,0.9,0.8,0.75,0.7,0.65,0.55};
int before[8]={0,3500,5000,8000,12500,38500,58500,83500};
int after[8]={0,3500,4955,7655,11255,30755,44755,61005};

int main(){
    double real,salary;
    cin>>real;
    int rank;
    for(rank=7;rank>=0;rank--){
        if(real>after[rank])break;
    }
    double delta=real-after[rank];
    double tmp=delta/rate[rank];
    double salsry=tmp+before[rank];
    cout<<salsry;
    return 0;
}