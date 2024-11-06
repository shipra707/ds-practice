#include<stdio.h>
void main()
{
int a[100],b[100],c[200];
int i,j,k=0,m,n;
printf("enter the no of elements of first aaray");
scanf("%d",&m);
printf("enter the elements of first aaray");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("enter the no of elements of second aaray");
scanf("%d",&n);
printf("enter the  elements of second aaray");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0,j=0;
while(i<m&&j<n)
{ if(a[i]<=b[j])
{ c[k]=a[i];
k=k+1;
i=i+1;
}
else
{
c[k]=b[j];
k=k+1;
j=j+1;
}
}
while(i<m)
{
c[k]=a[i];
k=k+1;
i=i+1;
}
while(j<n)
{
c[k]=a[j];
k=k+1;
j=j+1;
}
//int x=m+n;
printf("\n");
printf("the merge array will be");
for(i=0;i<m+n;i++)
printf("%d",c[i]);
printf("\n--------------------------------------------\n");
printf("Shipra Mishra\nIT-A\Lateral");
}
