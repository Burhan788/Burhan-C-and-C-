#include<stdio.h> //standard i/o header file

int main()
{
	float a,b;
	char oper;
	
	printf("Enter two operands and 1 operator: ");
	scanf("%f %f %c",&a,&b,&oper);
	
	switch(oper)
	{
		case '+':
			printf("\na+b = %f",a+b);
			break;
		case '-':
			printf("\na-b = %f", a-b);
			break;
		case '/':
			printf("\na/b = %f", a/b);
			break;
		default:
			printf("\nInvalid operator!");
			break;
	}
	
	
	
	return 0;
}
