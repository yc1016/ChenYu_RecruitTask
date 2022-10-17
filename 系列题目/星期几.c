#include<stdio.h>
int yeardays(int year)
{
  if((year%4==0 && year%100!=0)||(year%400==0)){
     return 366;
  }
   return 365;
}
int month2(int year)
{ 
  if((year%4==0 && year%100!=0)||(year%400==0)){
     return 29;
  }
   return 28;
}
int monthdays(int month)
{
  if(month == 1|| month == 3|| month == 5|| month == 7|| month == 8|| month == 10|| month == 12)
     return 31;
  if(month == 4|| month == 6|| month == 9|| month == 11)
     return 30;
  if(month == 2)
     return 0;
}
int main()
{
  int year,month,day,dd;
  int sum = 0;
  int total = 0;
  scanf("%d-%d-%d",&year,&month,&day);
  int m2 = month2(year);
  for(year;year<2035;year++){
     sum += yeardays(year);
  }
  if(month>2){
     for(int t =month-1;t>0;t--){
      dd += monthdays(t);
     }
     total = sum - m2 - dd - day+1;
  }
  else if(month ==2){
    total = sum - day - monthdays(1)+1;

  }
  else if(month ==1){
     total = sum - day+1;
  }
  total %= 7;
  switch(total){
    case 0:
       printf("Mon");
       break;
    case 1:
       printf("Sun");
       break;
    case 2:
       printf("Sat");
       break;
    case 3:
       printf("Fri");
       break;
    case 4:
       printf("Thu");
       break;
    case 5:
       printf("Wed");
       break;
    case 6:
       printf("Tue");
       break;
 
  }






return 0;
}
