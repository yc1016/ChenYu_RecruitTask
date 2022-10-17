#include<stdio.h>
int main()
{
   int n,i;
   double sum = 0.0;
   int p = 1;

   scanf("%d",&n);
   for( i = 1; i<=n; i++){
        sum +=p*1.0/i;
        p =-p;
   }
   printf("f(%d)=%f\n", n, sum);
   return 0;











}