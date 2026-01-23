#include<stdio.h>
int main(){
	int a[50],i,n,temp,j,min;
	
	
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElements of array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	
	}
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("\nSorted Elements of array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	
	}
}
