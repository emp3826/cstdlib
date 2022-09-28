#include <ctype.h>
#include <stdio.h>

int main()
{
	int var1 = 'd';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';
	isalnum(var1) ? printf("%cis an alnum\n", var1) : printf("%cis not an alnum\n", var1);
	isalnum(var2) ? printf("%cis an alnum\n", var2) : printf("%cis not an alnum\n", var2);
	isalnum(var3) ? printf("%cis an alnum\n", var3) : printf("%cis not an alnum\n", var3);
	isalnum(var4) ? printf("%cis an alnum\n", var4) : printf("%cis not an alnum\n", var4);
	int var5 = 'd';
	int var6 = '2';
	int var7 = '\t';
	int var8 = ' ';
	isalpha(var5) ? printf("%cis an alpha\n", var5) : printf("%cis not an alpha\n", var5);
	isalpha(var6) ? printf("%cis an alpha\n", var6) : printf("%cis not an alpha\n", var6);
	isalpha(var7) ? printf("%cis an alpha\n", var7) : printf("%cis not an alpha\n", var7);
	isalpha(var8) ? printf("%cis an alpha\n", var8) : printf("%cis not an alpha\n", var8);
	int var9 = 'h';
	int var10 = '2';
	isdigit(var9) ? printf("%c is a num\n", var9) : printf("%c is not a num\n", var9);
	isdigit(var10) ? printf("%c is a num\n", var10) : printf("%c is not a num\n", var10);
	int var11 = 'Q';
	int var12 = 'q';
	int var13 = '3';
	islower(var11) ? printf("%c is low\n", var11) : printf("%c is not low\n", var11);
	islower(var12) ? printf("%c is low\n", var12) : printf("%c is not low\n", var12);
	islower(var13) ? printf("%c is low\n", var13) : printf("%c is not low\n", var13);
	int var14 = 'n';
	int var15 = '\n';
	isspace(var14) ? printf("%c is space\n", var14) : printf("%c is not space\n", var14);
	isspace(var15) ? printf("%c is space\n", var15) : printf("%c is not space\n", var15);
}