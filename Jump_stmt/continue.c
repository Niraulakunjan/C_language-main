// skip the given condition
# include<stdio.h>
void main()
{
int i;
for(i=1;i<=10;i++)
{
if(i==5)
{
    continue;
}
printf("The  value of i  :%d\n",i);
}
}