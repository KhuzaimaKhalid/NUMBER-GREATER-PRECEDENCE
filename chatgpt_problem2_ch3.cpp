#include<stdio.h>

int main()
{
	printf("\t NUMBER GREATER PRECEDENCE\n");
    int num1,num2,num3;
	printf("Enter a Number: ");
	scanf("%d", &num1);
	printf("\nEnter a Number: ");
	scanf("%d", &num2);
	printf("\nEnter a Number: ");
	scanf("%d", &num3);
	if(num1>num2 && num1>num3){
		printf("The Number %d is greater", num1);
	} else if(num2>num1 && num2>num3){
		printf("The Number %d is greater", num2);
	} else if(num3>num1 && num3>num2){
		printf("The Number %d is greater", num3);
	}
	
	return 0;
}
