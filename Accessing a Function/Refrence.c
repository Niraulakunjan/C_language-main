# include<stdio.h>
int swap(int x, int y)
{
int r;
r=x;
x=y;
y=r;
return 0;

}
int main( )
{
int a,b;
a=10;
b=20;
printf("Value of a=%d and b=%d",a,b);
swap (a,b);
printf("/nValue of a=%d and b=%d",a,b);
return 0;
}
