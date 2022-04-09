#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* the ide cant handle more than n=60, after that it gets messy cause the ide has limited space*/
int triangle(int n,char a[100])
{int i,j,k;div_t m,h;int t,p;
k=strlen(a);
h=div(2*n-1,k);
p=(h.quot)+2;
m=div(2*n-1,2);
t=(m.quot)+1;
for(i=0;i<n;i++)
{
    for(j=1;j<2*n;j++)
    {
if(i==0)
{if(j<t)
printf(" ");
if(j==t)
printf("%s",a);
if(j>t)
printf(" ");}

if(i>0 && i!=n-1)
{

         if(j<t-i)
            printf(" ");

      if(j==t-i)
        printf("%s",a);
      if(j>t-i && j<t+i)
      printf(" ");
      if(j==t+i)
      printf("%s",a);
      if(j>t+i)
      printf(" ");



      }

if(i==n-1)
    if(j<p || j==p)
    printf("%s",a);





    }
printf("\n");
}


}







int main()
{int n;char a[100];
printf("donner n et a");
scanf("%d %s",&n,&a);
return triangle(n,a) ;
}
