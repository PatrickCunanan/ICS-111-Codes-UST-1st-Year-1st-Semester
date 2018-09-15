#include<stdio.h>

int main()
{
    float bw, wm, wsm, hm, fm, A1, A2, A3, A4, A5, B, BF, BFP; 
    int x;
    
    printf("Enter Gender (1 for female, 2 for male):");
    scanf("%d",&x);
    
    if (x==1)
    {
    printf("Enter body weight:");
    scanf("%f",&bw);
    
    printf("Enter wrist measurement:");
    scanf("%f",&wm);
    
    printf("Enter waist measurement:");
    scanf("%f",&wsm);
    
    printf("Enter hip measurement:");
    scanf("%f",&hm);
    
    printf("Enter forearm measurement:");
    scanf("%f",&fm);
    
     A1=(bw*0.732)+8.987;
     A2=wm/3.140;
     A3=wsm*0.157;
     A4=hm*0.249;
     A5=fm*0.434;
     B=A1+A2-A3-A4+A5;
     BF=bw-B;
     BFP=(BF*100)/bw;
     
     printf("Body Fat is %.2f\n",BF);
     printf("Body Fat Percentage is %.2f percent\n",BFP);
     }
     else if (x==2)
     {
          printf("Enter body weight:");
          scanf("%f",&bw);
          
          printf("Enter wrist measurement:");
          scanf("%f",&wm);
          
          A1=(bw*1.082)+94.42;
          A2=wm*4.15;
          B=A1-A2;
          BF=bw-B;
          BFP=(BF*100)/bw;
          
          printf("Body Fat is %.2f\n",BF);
          printf("Body Fat Percentage is %.2f percent\n",BFP);
     }
     
     getch();
             }
    
