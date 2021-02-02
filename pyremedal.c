#include<stdio.h>
void main()
{
int n,m;
for(n=1;n<=10;n++)
{
    for(m=1;m<=10-n;m++)
       {
          printf(" ");
}
for(m=1;m<=2*n-1;m++)
          printf("*");
   printf("\n");
}
}