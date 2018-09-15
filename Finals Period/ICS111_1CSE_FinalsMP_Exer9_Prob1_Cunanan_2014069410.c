#include<stdio.h>
#include<string.h>
int main()
{
float studyHours;
char name[20];

printf("Input name:");
scanf("%s",&name);
printf("Input study hours:");
scanf("%f",&studyHours);

printf("Hello, %s! on Saturday, you need to study %.1f hours for the exam.",name,studyHours);

getch();
return 0;
}
