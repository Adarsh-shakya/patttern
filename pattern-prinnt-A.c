#include<stdio.h>
void main()
{
int n,m;
for(n=1;n<=10;n++)
 {
    for(m=1;m<=11-n;m++)
    {
       printf(" "); 
     }
for(m=1;m<=2*n-1;m++)
{
 if(m==1||m==2*n-1||n==6||n==7)
     printf("*");
else
      printf(" ");
}
     printf("\n");
}
}