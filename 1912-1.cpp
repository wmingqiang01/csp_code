#include<bits/stdc++.h>
using namespace std;
int n;
int a=0,b=0,c=0,d=0;
int main(){
    cin>>n;
    int flag=1;
    int order=1;
    while(n--){
        switch (flag)
        {
        case 1:
            flag=2;
            if(order%7==0||order%10==7||(order%100)/10==7||order/100==7){a++;n++;}
            order++;
            break;
        case 2:
            flag=3;
            if(order%7==0||order%10==7||(order%100)/10==7||order/100==7){b++;n++;}
            order++;
            break;
        case 3:
            flag=4;
            if(order%7==0||order%10==7||(order%100)/10==7||order/100==7){c++;n++;}
            order++;
            break;
        case 4:
            flag=1;
            if(order%7==0||order%10==7||(order%100)/10==7||order/100==7){d++;n++;}
            order++;
            break;
        
        default:
            break;
        }
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<d;
    return 0;
}