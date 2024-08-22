# include<stdio.h>
int main()
{

int r,n,x;
printf("Enter a number:");
scanf("%d",&n);
x=0;
while(n>0)
{
r=n%10;
x=x*10+r;
n=n/10;
}
printf("\n Reverse Number is%d",x);
}