#include <ctype.h>
#include <stdio.h>

int main()
{
	int var1 = 'n';
	int var2 = '\n';
	isspace(var1) ? printf("%c is space\n", var1) : printf("%c is not space\n", var1);
	isspace(var2) ? printf("%c is space\n", var2) : printf("%c is not space\n", var2);
}
