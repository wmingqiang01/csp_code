#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    vector<double> arr;
    cin>>n;
    double x,sum=0;
    for(int i =0;i<n;i++){
        cin>>x;
        arr.push_back(x);
        sum+=x;
    }
    double avr=sum/n;
    double d=0;
    for(int i=0;i<n;i++){
        d+=pow(arr[i]-avr,2);
    }
    double D=sqrt(d/n);
    for(int i=0;i<n;i++){
        cout<<(arr[i]-avr)/D<<" ";
    }
    cout<<endl;
    return 0;
}