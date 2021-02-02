#include<stdio.h>
void main()
{
int n, m,k='A';
for(n=1;n<=7;n++)
{
  for(m=1;m<=8-n;m++)
{
printf(" ");
}
printf("%c",k++);
printf("\n");
}
}