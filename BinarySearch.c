#include <stdio.h>
int main() {
    int n,target,arr[20],flag=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);}
	printf("Enter the element to be searched:");
	scanf("%d",&target);
	int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (high+low)/2;
        if (arr[mid] == target) {
            flag=1;
            printf("Element is found at location:%d\n",mid+1);
            break; // Element found, exit loop
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (flag == 0) {
        printf("Element Not found in array\n");
    }
    printf("-----------------------------------------------\n");
    printf("Shipra Mishra IT-A\Lateral");
    return 0;
}

