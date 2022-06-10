#include <ctype.h>
#include <stdio.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if(isalnum(var1))
   {
      printf("%cis an alnum\n", var1);
   }
   else
   {
      printf("%cis not an alnum\n", var1);
   }
   if(isalnum(var2))
   {
      printf("%cis an alnum\n", var2);
   }
   else
   {
      printf("%cis not an alnum\n", var2);
   }
   if(isalnum(var3))
   {
      printf("%cis an alnum\n", var3);
   }
   else
   {
      printf("%cis not an alnum\n", var3);
   }
   if(isalnum(var4))
   {
      printf("%cis an alnum\n", var4);
   }
   else
   {
      printf("%cis not an alnum\n", var4);
   }
}
