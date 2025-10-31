//Q5. Write a program to input a character from the user and print whether it is a vowel or consonant.

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character here: ");
	scanf("%c", &ch);
	
	switch(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		case 1:
			printf("%c is vowel", ch);
			break;
		default:
			printf("%c is a consonant", ch);	
	}
	return 0;
}
