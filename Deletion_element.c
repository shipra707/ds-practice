#include<stdio.h>
void main(){
int arr[100],n,num,pos;
printf("Enter the number of elements in an array:");
scanf("%d",&n);
printf("Enter the elements of an array:");
for (int i = 0; i < n; i++)
{ scanf("%d",&arr[i]);
}
printf("Enter the number you want to delete:");
scanf("%d",&num);
for (int i = 0; i < n; i++)
{ if (arr[i]==num) {
pos=i; } }
for (int i = pos; i < n-1; i++)
{ arr[i]=arr[i+1]; }
n--;
printf("Elements of array are:");
for (int i = 0; i < n; i++)
{ printf("%d ",arr[i]); }
printf("\n--------------------------------------------\n");
printf("Shipra Mishra\nIT-A\Lateral");
}

