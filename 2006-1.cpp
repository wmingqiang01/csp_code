#include<iostream>
using namespace std;
struct zt{
	int x;//横坐标 
	int y;//纵坐标 
	char c;
};
int main()
{
	int n,m,j,i,L,L1,L2;
	cin>>n>>m;
	struct zt a[n];
		for(i=0;i<n;i++)
		cin>>a[i].x>>a[i].y>>a[i].c;
	for (i=0;i<m;i++)
	{	int p=0;
		int pA=0,pB=0;
		bool tA=true,tB=true;
		cin>>L>>L1>>L2;
		for(j=0;j<n;j++)
		{
	
			if(a[j].c=='A')
			{
				if(pA==0)
				{
					tA=((L+L1*a[j].x+L2*a[j].y)>0);
					pA=1;
				}
				else if(pA == 1)
				{
					if(tA!=((L+L1*a[j].x+L2*a[j].y)>0))
					{
						p=1;
						cout <<"No"<< endl;
						break;
					}
				}
			}
			else if(a[j].c=='B')
			{
				if (pB==0)
				{
					tB=((L+L1*a[j].x+L2*a[j].y)>0);
					pB=1;
				}
				else if(pB==1)
				{
					if (tB!=((L+L1*a[j].x+L2*a[j].y)>0))
					{
						p=1;
						cout<<"No"<<endl;
						break;
					}
				}
			}
		}
		if(p==0)
			cout<<"Yes"<<endl;
		}
	return 0;
	}