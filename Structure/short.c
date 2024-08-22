#include <stdio.h>
int main()
{
int a,b,temp, n[3];
for (a=0;a<3;a++)
{
   printf("Enter the  Number");
   scanf("%d",&n[a]); 
}
for(a=0;a<3;a++)
{
    for(b=a+1;b<3;b++)
    if (n[a]>n[b])
    {
    temp=n[a];
    n[a]=n[b];
    n[b]=temp;
    }
for(a=0;a<3;a++)
    printf("The shorting of the number is %d\n",n[a]);
    
}
return 0;
}