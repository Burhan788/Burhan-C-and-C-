#include<stdio.h> //standard i/o header file

int main()
{
	//%d is a format specifier for integer
	//%f is a format specifier for float
	//%c is a format specifier for char
	// escape sequence for newline - \n
	// escape sequence for tab - \t
	printf("\tsize of integer = %d",sizeof(int));
	printf("\nsize of character = %d",sizeof(char));
	
	return 0;
}
