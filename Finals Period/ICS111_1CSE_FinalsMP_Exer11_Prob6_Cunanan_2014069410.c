#include <stdio.h>
#include <conio.h>
#include <string.h>
#define SIZE 10

typedef struct
{
char fname[20];
char lname[20];
int homeruns;
int hits;
}INFO;

INFO inputdata(void)
{
INFO temp;

printf("Enter name of Player: ");
scanf("%s %s",&temp.fname,&temp.lname);
printf("Enter the Player's number of homeruns: ");
scanf("%d",&temp.homeruns);
printf("Enter the Player's number of hits: ");
scanf("%d",&temp.hits);

return temp;
}

void outputdata(INFO s[])
{
int i;
for(i=0;i<SIZE;i++)
{
printf("\n%s %s\n",s[i].fname,s[i].lname);
printf("Homeruns: %d ",s[i].homeruns);
printf("Hits: %d",s[i].hits);
}
}


int main(){
INFO info[SIZE];
int i;

for(i=0;i<SIZE;i++)
{
info[i]=inputdata();
}
outputdata(info);

getch();
return 0;
}
