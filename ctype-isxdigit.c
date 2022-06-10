#include <ctype.h>
#include <stdio.h>

int main()
{
	char var1[] = "abc";
	char var2[] = "0xE";
	isxdigit(var1[0]) ? printf("%c is hex", var1[0]) : printf("%c is not hex", var1[0]);
	isxdigit(var2[0]) ? printf("%c is hex", var2[0]) : printf("%c is not hex", var2[0]);
}
