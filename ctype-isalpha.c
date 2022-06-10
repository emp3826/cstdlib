#include <ctype.h>
#include <stdio.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if(isalpha(var1))
   {
      printf("%cis an alpha\n", var1);
   }
   else
   {
      printf("%cis not an alpha\n", var1);
   }
   if(isalpha(var2))
   {
      printf("%cis an alpha\n", var2);
   }
   else
   {
      printf("%cis not an alpha\n", var2);
   }
   if(isalpha(var3))
   {
      printf("%cis an alpha\n", var3);
   }
   else
   {
      printf("%cis not an alpha\n", var3);
   }
   if(isalpha(var4))
   {
      printf("%cis an alpha\n", var4);
   }
   else
   {
      printf("%cis not an alpha\n", var4);
   }
}
