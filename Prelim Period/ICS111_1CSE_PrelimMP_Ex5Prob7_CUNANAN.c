#include<stdio.h>

int main()
{
    float num1, num2;
    double ans;
    int x;
    printf("Enter 2 decimals:\n");
    scanf("%f %f", &num1, &num2);
    printf("Enter operation (1 for *, 2 for /, 3 for +, 4 for -):\n");
    scanf("%d",&x);
    
    if (x==1)
    {
            ans=num1*num2;
            printf("The product is %.2f",ans);
    }
    
    else if(x==2)
    {
            ans=num1/num2;
            printf("The quotient is %.2f",ans);
    }
    
     else if(x==3)
    {
            ans=num1+num2;
            printf("The sum is %.2f",ans);
    }
    
     else if(x==4)
    {
            ans=num1-num2;
            printf("The difference is %.2f",ans);
    }
    
    getch();
}
