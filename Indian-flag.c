#include<stdio.h>
void main()
{
  int i,j,k,a,b,c;
printf("\n\n");
  for(i=1;i<=45;i++)
  {
    for(j=0;j<=10;j++)
    {
       printf(" ");
    }
    if(i==2||i==4||i==6||i==8)
      {
        for(k=0;k<=18;k++)
           printf("*");
      }
     else if(i==3||i==5||i==7)
      {
        printf("*");
           for(j=0;j<=16;j++)
              {
                  printf(" ");
               }
         printf("*"); 
      }
else if(i!=3||i!=5||i!=7)
{
    printf("*");
      if(i==20)
        {
            printf("\t\t\tIndian Flag");
        }
}
printf("\n");
  }
  for(c=0;c<=1;c++)
      {
           for(a=0;a<=6;a++)
              { 
                  printf(" ");
              }
         for(b=0;b<=9;b++)
             {
                   if(c==0)
                      {
                           printf("*");
                       }
            }
             if(c==1)
                       {
                           printf("*");
                               for(a=0;a<=7;a++)
                                  {
                                         printf(" ");
                                  }
                          printf("*");
                     }
         printf("\n");
       }
}
