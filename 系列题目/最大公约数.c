// ���b=0�����������a�����Ǹ����Լ����
// ���򣬼���a����b����������a=b��b=�Ǹ�������
// �ص���һ��
// a  b  t
// 12 18 12
// 18 12 6
// 12 6 0
// 6 0      ���Լ��Ϊ6   <<<<<շת�����
#include<stdio.h>
int main()
{
  int a,b,t;
  scanf("%d",&a);
  scanf("%d",&b);
  int A = a,B = b;
  if(b==0)
    printf("%d��%d�����Լ����%d",A,B,a);
  else 
    while(b !=0){
      t = a%b;
      a = b;
      b = t;
    }
    printf("%d��%d�����Լ����%d",A,B,a);
    return 0;
  









}