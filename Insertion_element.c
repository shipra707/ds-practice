#include<stdio.h>
void main(){
int arr[100],n,num,pos;
printf("Enter the number of elements in an array:");
scanf("%d",&n);
printf("Enter the elements of an array:");
for (int i = 0; i < n; i++)
{ scanf("%d",&arr[i]); }
printf("Enter the element you want to insert:");
scanf("%d",&num);
printf("Enter the position in which you want to insert:");
scanf("%d",&pos);
for (int i = num-1; i>=pos-1; i--)
{ arr[i+1]=arr[i]; }
arr[pos-1]=num;
n++;
printf("Elements of array are:");
for (int i = 0; i < n; i++)
{ printf("%d ",arr[i]); }
printf("\n--------------------------------------------\n");
printf("Shipra Mishra\nIT-A\Lateral");
}
