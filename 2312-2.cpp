#include <bits/stdc++.h>
using namespace std;

int n, k, ans;
int num, flag = 2;
stack<pair<int, int>> stk;
pair<int, int> pa;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num >> k;
        stk.push(make_pair(0,1));
        while (num > 1)
        {
            if (num % flag == 0&&stk.top().first!=flag)
            {
                pa=make_pair(flag,1);
                stk.push(pa);
                num/=flag;
            }else if (num%flag==0&&stk.top().first==flag)
            {
                stk.top().second++;
                num/=flag;
            }
            if(num%flag!=0){
                flag++;
            }
            
        }
        while (!stk.empty())
        {
            if(stk.top().second>=k){
                ans+=pow(stk.top().first,stk.top().second);
                stk.pop();
            }
        }
        cout<<ans;
    }
    return 0;
}
