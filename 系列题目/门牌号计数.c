#include<stdio.h>
//定义函数，将计算数字中有多少个2用ans表示出来
int calu(int num)
{
    int ans = 0;
    while(num)
    {
        if(num%10==2)
            ans++;
        num/=10;
    }
    return ans;
}
int main()
{
    int cnt = 0;
    //利用循环，将多个数字对应的ans累加，得到答案
    for(int i = 1;i <=2020;i++)
    {
      cnt+=calu(i);
    }
    printf("%d",cnt);
    return 0;

}
