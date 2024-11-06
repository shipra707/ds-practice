#include <stdio.h>
void main(){
	int n,target,arr[20],flag=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	printf("Enter the element to be searched:");
	scanf("%d",&target);
	for(int i=0;i<n;i++){
		if(target==arr[i]){
			flag=1;
			printf("Element found at location:%d",i+1);
			break;}}
	if(flag==0){
		printf("Element not found the array:");
	}
	printf("\n-----------------------------------------------\n");
	printf("Shipra Mishra IT-A\Lateral");
	}
