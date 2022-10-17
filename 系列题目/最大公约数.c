// 如果b=0，计算结束，a就是那个最大公约数；
// 否则，计算a除以b的余数，让a=b，b=那个余数；
// 回到第一步
// a  b  t
// 12 18 12
// 18 12 6
// 12 6 0
// 6 0      最大公约数为6   <<<<<辗转相除法
#include<stdio.h>
int main()
{
  int a,b,t;
  scanf("%d",&a);
  scanf("%d",&b);
  int A = a,B = b;
  if(b==0)
    printf("%d和%d的最大公约数是%d",A,B,a);
  else 
    while(b !=0){
      t = a%b;
      a = b;
      b = t;
    }
    printf("%d和%d的最大公约数是%d",A,B,a);
    return 0;
  









}