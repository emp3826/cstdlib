#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isalnum(var1) )
   {
      printf("|%c|is a lnum\n", var1);
   }
   else
   {
      printf("|%c|is not a lnum\n", var1);
   }
   if( isalnum(var2) )
   {
      printf("|%c|is a lnum\n", var2);
   }
   else
   {
      printf("|%c|is not a lnum\n", var2);
   }
   if( isalnum(var3) )
   {
      printf("|%c|is a lnum\n", var3);
   }
   else
   {
      printf("|%c|is not a lnum\n", var3);
   }
   if( isalnum(var4) )
   {
      printf("|%c|is a lnum\n", var4);
   }
   else
   {
      printf("|%c|is not lnum\n", var4);
   }
}
