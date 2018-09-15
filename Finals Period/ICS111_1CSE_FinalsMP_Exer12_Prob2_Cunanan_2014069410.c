#include<stdio.h>

int computeAid(int tuition, float gpa, float vaid);

int main()
{
int tuition;
float gpa,aid;

printf("Enter the amount of your tuition costs, not to exceed P60,000.00:");
scanf("%d",&tuition);
printf("Enter your GPA(a value between 5 and 1):");
scanf("%f",&gpa);

if (gpa==2||gpa==1.75||gpa==1.5||gpa==1.25||gpa==1)
{
aid=tuition/gpa;
printf("You are entitled to receive P%.2f in financial aid",aid);
}
else if (gpa==2.25||gpa==2.5||gpa==2.75||gpa==3||gpa==5)
{
printf("Sorry, you do not qualify academically for financial aid.");
}
getch();
return 0;
}
