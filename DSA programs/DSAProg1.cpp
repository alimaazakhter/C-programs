#include<stdio.h>
int main(){
	int n,a[20],i,pos,newele,ch;
	printf("Enter no of elements:");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\nEnter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nArray elements:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	while(ch!=3){
		printf("\n\n1.Deletion\t2.Insertion\t3.Exit\n");
		printf("ENter choice:\n");
		scanf("%d",&ch);

		if(ch==1){
			printf("Enter position to delete:");
			scanf("%d",&pos);

			for(i=pos-1;i<n-1;i++){
			a[i]=a[i+1];
			}
			n--;

			printf("\nArray elements:\n");
			for(i=0;i<n;i++){
				printf("%d\t",a[i]);
			}

		}
		if(ch==2){
			printf("Enter position to insert:");
			scanf("%d",&pos);

			for(i=n;i<pos-1;i--){
				a[i]=a[i-1];
			}
			printf("Enter new element for insert:");
			scanf("%d",&newele);
			a[pos-1]=newele;
			n++;

			printf("\nArray elements:\n");
			for(i=0;i<n;i++){
				printf("%d\t",a[i]);
			}
		}

	}
	return 0;
}
