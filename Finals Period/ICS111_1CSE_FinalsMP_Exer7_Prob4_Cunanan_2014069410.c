#include<stdio.h>
float billingAmount(float x,int y,int z);
int main()
{
    int min,hour,consume,lowInc;
    float rate;
    printf("Enter your hourly rate:");
    scanf("%f",&rate);
    printf("Enter your consumption time(enter the hour first then the minutes):");
    scanf("%d%d",&hour,&min);
    consume=timeConvert(hour,min);
    printf("enter 1 if you have low income if not enter 0:");
    scanf("%d",&lowInc);
    printf("the billing amount is %.2f\n",billingAmount(rate,consume,lowInc));
    system("pause");
    return 0;
}
int timeConvert(int x,int y)
{
    int time;
    time=x*60+y;
    return time;
}
float billingAmount(float x,int y,int z)
{
    float bill;
    
    if(z==1)
    {
            
     if(y<=30)
      {bill=x;}
     else
     {y-=30;
     bill=x*0.40*(y/60.0);}
    }
    else
    {
        if(y<=20)
        {bill=x;}
        else
        {y-=20;
            bill=x*0.70*(y/60.0);}
    }
    return bill;
}
