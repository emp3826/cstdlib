#include <ctype.h>
#include <stdio.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   isalpha(var1) ? printf("%cis an alpha\n", var1) : printf("%cis not an alpha\n", var1);
   isalpha(var2) ? printf("%cis an alpha\n", var2) : printf("%cis not an alpha\n", var2);
   isalpha(var3) ? printf("%cis an alpha\n", var3) : printf("%cis not an alpha\n", var3);
   isalpha(var4) ? printf("%cis an alpha\n", var4) : printf("%cis not an alpha\n", var4);
}
