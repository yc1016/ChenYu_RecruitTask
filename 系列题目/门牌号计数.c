#include<stdio.h>
//���庯�����������������ж��ٸ�2��ans��ʾ����
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
    //����ѭ������������ֶ�Ӧ��ans�ۼӣ��õ���
    for(int i = 1;i <=2020;i++)
    {
      cnt+=calu(i);
    }
    printf("%d",cnt);
    return 0;

}
