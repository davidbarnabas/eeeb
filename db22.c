#include<stdio.h.
int main()
{
int j=1,n,a[20],i,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<(n-1);i++)
{
c=a[i]>a[j]?a[i]:a[i+1];

}
printf("%d",c);
return 0;
}
