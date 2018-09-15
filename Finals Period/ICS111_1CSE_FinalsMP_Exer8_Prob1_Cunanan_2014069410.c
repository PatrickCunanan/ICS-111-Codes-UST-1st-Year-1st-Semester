#include<stdio.h>
int main()
{
int num[50];
int i;
for (i=0;i<50;i++)
{
num[i]=i*i;
if (i>25)
{
num[i]=3*i;
}
if (i%10==0)
{
printf("\n");
}
printf("%d ",num[i]);
}
getch();
return 0;
}
