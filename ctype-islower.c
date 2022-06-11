#include <ctype.h>
#include <stdio.h>

int main()
{
	int var1 = 'Q';
	int var2 = 'q';
	int var3 = '3';
	islower(var1) ? printf("%c is low\n", var1) : printf("%c is not low\n", var1);
	islower(var2) ? printf("%c is low\n", var1) : printf("%c is not low\n", var2);
	islower(var3) ? printf("%c is low\n", var3) : printf("%c is not low\n", var3);
}
