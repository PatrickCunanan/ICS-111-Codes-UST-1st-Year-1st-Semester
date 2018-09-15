#include<stdio.h>

int main()
{
int counter,i,score;
int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;

printf("How many scores to input?:");
scanf("%d",&counter);

for(i=0;i<counter;i++)
{
printf("Input score:");
scanf("%d",&score);

if(score>=0&&score<=24)
{
c1+=1;
}
else if(score>=25&&score<=49)
{
c2+=1;
}
else if(score>=50&&score<=74)
{
c3+=1;
}else if(score>=75&&score<=99)
{
c4+=1;
}else if(score>=100&&score<=124)
{
c5+=1;
}else if(score>=125&&score<=149)
{
c6+=1;
}else if(score>=150&&score<=174)
{
c7+=1;
}else if(score>=175&&score<=200)
{
c8+=1;
}
}
printf("\nTotal number of scores:%d\n",counter);
printf("Range          Tally\n");
printf("0-24              %d\n",c1);
printf("25-49             %d\n",c2);
printf("50-74             %d\n",c3);
printf("75-99             %d\n",c4);
printf("100-124           %d\n",c5);
printf("125-149           %d\n",c6);
printf("150-174           %d\n",c7);
printf("175-200           %d\n",c8);

getch();
return 0;
}
