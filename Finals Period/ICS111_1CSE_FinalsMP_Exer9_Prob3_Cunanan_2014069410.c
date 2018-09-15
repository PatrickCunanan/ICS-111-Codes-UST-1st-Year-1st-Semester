#include<stdio.h>
int main(){
    char line[150];
    int i,v;
    v=0;
    printf("Input string:\n");
    gets(line);
    for(i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            ++v;
    }
    printf("Number of vowels: %d",v);

    getch();
    return 0;
}
