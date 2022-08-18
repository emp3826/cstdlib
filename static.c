#include <stdio.h>

int normal_counter()
{
	int count = 1;
	printf("%d\n", count);
	count++;
}

int static_counter()
{
	static int count = 1;
	printf("%d\n", count);
	count++;
}

int main()
{
	normal_counter();
	normal_counter();
	normal_counter();
	static_counter();
	static_counter();
	static_counter();
}