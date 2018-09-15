#include<stdio.h>
char getlet(float grade);
int main()
{
char answer[20]="TFFTFFTTTTFFTFTFTFTT";
char input[2][20],stud[2][20],letter[2];
int i,i2,ans=0;
float grade[2];

printf("Input Student ID and answers: ");

for (i=0;i<2;i++){
gets(stud[i]);
gets(input[i]);

for(i2=0;i2<20;i2++){
if (input[i][i2]==answer[i2]){
grade[i]+=2;
}
else {
if (input[i][i2]==answer[i2])
{
grade[i]--;
}
}
}
grade[i]=grade[i]/(40.0)*100;
letter[i]=getlet(grade[i]);
printf("%s %s %.2f %c \n",stud[i],input[i],grade[i],letter[i]);
}
getch();
}

char getlet(float grade)
{
    int i,letter;
    if (grade>=90)
        letter='A';
    else if (grade>=80)
        letter='B';
    else if (grade>=70)
        letter='C';
    else if (grade>=60)
        letter='D';
    else
        letter='F';
    return letter;
}
