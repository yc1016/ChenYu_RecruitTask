#include<stdio.h>
int main()
{
  int sum = 0;
  int a = 0;
  int number = 0;
  double p = 0;
  do{
    scanf("%d",&a);
    sum += a;
    number ++;
  }while (number<12);
   p = sum / 12.0;
   p *= 1000;
   p += 0.05;
   p /= 1000;
   printf("$%.2f\n",p);
   return 0;





}