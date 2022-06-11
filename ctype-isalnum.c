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
}
