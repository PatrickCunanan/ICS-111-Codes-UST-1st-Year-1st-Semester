#include<stdio.h>
#include<string.h>

int main()
{
char name[100];
char ssn[12];
char userID[100];
char pw[100];
int i,j;

printf("Input name:");
gets(name);
printf("Input Social Sceurity Number:");
gets(ssn);
printf("Input User ID:");
gets(userID);
printf("Input Password:");
gets(pw);

printf("\nName: %s\n",name);
printf("SSN: XXX-XX-XXXX\n");
printf("User ID: %s\n",userID);
printf("Password: ");
for(i=0; pw[i]!='\0'; ++i);
{
for(j=0; j<i; j++)
{
printf("X");
}
}
getch();
return 0;
}
