#include<stdio.h> //standard i/o header file

int main()
{
	int a=5,b=10;
	char ch = 'A';
	float f = 9.57;
	printf("a = %d, b = %d",a,b);
	printf("\nch = %c",ch);
	printf("\nf = %0.2f",f); //to limit float to 2 decimal places
	return 0;
}
