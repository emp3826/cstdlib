#include <ctype.h>
#include <stdio.h>

int main()
{
	int var1 = 'Q';
	int var2 = 'q';
	int var3 = '3';
	isupper(var1) ? printf("%c is up\n", var1) : printf("%c is not up\n", var1);
	isupper(var2) ? printf("%c is up\n", var2) : printf("%c is not up\n", var2);
	isupper(var3) ? printf("%c is up\n", var3) : printf("%c is not up\n", var3);
}
