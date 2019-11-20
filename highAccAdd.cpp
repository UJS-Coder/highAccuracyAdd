#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000], ia = 0, ib = 0,flag = 0;
    char ch;//用于一次读取一个字符
    //输入，可以用函数简化
    while(cin.get(ch)&&ch!=' '&&ch!='\n')
    {
        a[ia]=ch-'0';
        ia++;
    }
    while(cin.get(ch)&&ch!=' '&&ch!='\n')
    {
        b[ib]=ch-'0';
        ib++;
    }
    {
        //加法
        int t = min(ia,ib);//读取最小位数
        for(int i = 0; i < t; i++)
        {
            a[ia-i-1]+=flag;//进位处理
            a[ia-i-1]=a[ia-i-1]+b[ib-i-1];
            if(a[ia-i-1]>=10)
            {
                flag=a[ia-i-1]/10;
                a[ia-i-1]%=10;
            }
        }
    }
    for(int t = 0; t < ia; t++)
        cout << a[t];//输出
}

