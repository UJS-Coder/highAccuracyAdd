#include <bits/stdc++.h>
using namespace std;
//感谢xd同学的修改
int main()
{
	string a,b,c;
	int sa = 0,sb = 0,sc = 0;
	cin>>a>>b;
	sa=a.length(),sb=b.length();
	int m=min(sa,sb);//最小位数
	int n=max(sa,sb);//最大位数，用于最小位数相加后补位
	for(int i=0;i<sa;i++) a[i]=a[i]-'0';
	for(int i=0;i<sa;i++) b[i]=b[i]-'0';//字符转数字
	int flag=0;//进位标识
	for(int i=0;i<m;i++)
	{
		c[n-i]=a[sa-i-1]+b[sb-i-1]+flag;//进位加法
		if(c[i]>=10)
		{
			c[n-i]=c[n-i]%10;
			flag=1;//进位处理
		}
		else flag=0;
		printf("%d\n",c[n-i]);//输出末位

	}
	for(int i=n-m;i<n;i++)//落没有被处理的位
	{
		c[n-i]=c[n-i]+flag;
		if(c[n-i]>=10)
		{
			c[n-i]=c[n-i]%10;
			flag=1;
		}
		else flag=0;//思路和上方一致
	}
	for(int i=1;i<=n;i++) printf("%d",c[i]);//输出


 }
