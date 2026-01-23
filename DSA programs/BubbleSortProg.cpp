
#include<stdio.h>
int main(){
	int a[50],search,i,n,temp,j;
	
	
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
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nSorted Elements of array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	
	}
}

