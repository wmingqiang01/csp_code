#include<bits/stdc++.h>
using namespace std;

int n,k;
queue<int> cakes;
int cake;

bool cmp_value(const pair<int, int> left,const pair<int,int> right){
	return left.second < right.second;
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>cake;
        cakes.push(cake);
    }
    int count=0;
    while (!cakes.empty())
    {   
        int tmp;
        tmp+=cakes.front();
        cakes.pop();
        if(tmp>=k){
            count++;
            cakes.pop();
        }
        else{
            while (tmp<k)
            {
                tmp+=cakes.front();
                cakes.pop();
            }
        }
        cout<<count;
        return 0;
    }
}
