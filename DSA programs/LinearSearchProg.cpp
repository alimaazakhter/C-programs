#include<stdio.h>
int main(){
	int a[50],search,i,n,found;
	
	
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter element %d",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements of array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	
	}
	
	printf("Enter element to search:");
	scanf("%d",&search);
	found=0;
	for(i=0;i<n;i++){
		if(a[i]==search){
			printf("Element found at position %d",i+1);
			found=1;
			break;
		}
	}
	if(found==0){
		printf("element not found");
	}
	
	
}
