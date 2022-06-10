#include <ctype.h>
#include <stdio.h>

int main()
{
	int var1 = 'h';
	int var2 = '2';
	isdigit(var1) ? printf("%c is a num\n", var1) : printf("%c is not a num\n", var1);
	isdigit(var2) ? printf("%c is a num\n", var2) : printf("%c is not a num\n", var2);
}
