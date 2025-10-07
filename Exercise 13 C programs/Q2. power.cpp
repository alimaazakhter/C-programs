#include<stdio.h>

	int power(int base, int expo){
	if (expo==0)
	{
		return 1;
	}
	else{
		return base * power(base, expo-1);
	}
	
}
	int main(){
		int base_num, exponant;
		int result;
		
		printf("Enter the base number: ");
		scanf("%d", &base_num);
		
		printf("Enter the exponent: ");
    	scanf("%d", &exponant);
	
		result = power(base_num, exponant);
		printf("%d raised to the power of %d is %d\n", base_num, exponant, result);
		
		return 0;
	
	}
	


