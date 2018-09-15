//Program that arranges 3 number in ascending order
//Patrick Bryan F. Cunanan 1CS-E
#include<stdio.h> 


int main() 
{ 
      int a[3],x,y,z;  
      printf("Enter 3 numbers:"); 
      for (x=0;x<3;x++) 
      scanf("%d",&a[x]); 
      for (x=0;x<3;x++) 
      { 
          for(y=x+1;y<3;y++) 
          { 
            if(a[x]>a[y]) 
              { 
                z=a[x]; 
                a[x]=a[y]; 
                a[y]=z; 
              } 
          } 
      } 
printf("Ascending Order is:"); 
for(y=0;y<3;y++) 
printf(" %d",a[y]); 

getch(); 
}
