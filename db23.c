#include<stdio.h>
int main()
{
int a[20],i,n,min;

printf("enter the number:\n");
scanf("%d",&n);
printf("enter the %d integer in an array:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
{
min=a[i];
}
}
printf("The smallest number in an array is:%d\n",min);
return 0;
}
