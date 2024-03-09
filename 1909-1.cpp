#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int total=0;
    int max_loss=INT_MIN;
    int col;

    int initial;
    int apple[1010];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>initial;
        int cut=0;
        for(int j=0;j<m;j++){
            cin>>apple[j];
            cut-=apple[j];
            
        }
        if(cut>max_loss){
            max_loss=cut;
            col=i;
        }
        total+=(initial-cut);
    }
    cout<<total<<" "<<col+1<<" "<<max_loss;
    return 0;
}
