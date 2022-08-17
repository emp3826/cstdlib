#include <stdio.h>

void print(int a)
{
	printf("%d\n",a);
}

void (*print_ptr)(int) = &print;

int main()
{
	
	print(10);
	(*print)(10);
	(&print)(10);
	(*print_ptr)(10);
	print_ptr(10);
}