#include<stdio.h>
int main()
{
  long long int n,k,x,i;
  long long int count = 0;
  long long int sum =0;
  scanf("%lld",&n);
  scanf("%lld",&k);
  scanf("%lld",&x);
   while(x>0)
   {
    i=x%10;
    x/=10;
    sum+=i;
    } 
    if(k==1) 
        {printf("%lld",sum);}
    if (k>1){do
    { x = sum;
     sum = 0;
     while(x>0){
     i=x%10;
     x/=10;
     sum+=i; 
     }
     k--;}while(k>1);
    printf("%lld",sum);}
    return 0;}