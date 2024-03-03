#include<bits/stdc++.h>
using namespace std;

int main(){
    int point=1;
    int tmp;
    int score;
    int flag=0;
    while(point!=0){
        cin>>point;
        if(flag==0&&point==2){
            score+=2;
        }
        if(point==1){
            score+=1;
            flag=1;
        }
        if(point==2&&flag!=0){
            score+=2*flag;
            flag++;
        }
    }
    cout<<score;
    return 0;
}