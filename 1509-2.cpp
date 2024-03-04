#include<stdio.h>
int main()
{
	int y, d;
	int i;
	scanf("%d", &y);
	scanf("%d", &d);
	int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//闰年
	int b[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//平年
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)//如果是闰年
	{
		for (i = 0; i < 12; i++)
		{
			if (d > a[i])
				d = d - a[i];//减去一个月的天数
			else
			{
				printf("%d\n", i + 1);
				printf("%d\n", d);
				break;
			}
		}
	}
	else//如果是平年
	{
		for (i = 0; i < 12; i++)
		{
			if (d > b[i])
				d = d - b[i];
			else
			{
				printf("%d\n", i + 1);
				printf("%d\n", d);
				break;
			}
		}
	}
	return 0;
}
