# include<stdio.h>
int main()
{
int i,n,f;
printf("Enter a number:");
scanf("%d", &n);
if (n>0)
{
f=1;
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("\n The factorial value is %d",f);
}
else
{
printf("\n It is not a positive number");
}
return 0;
}