#include<stdio.h>


/**
 *
 *
 *
 *
 *
 *
 *
 */

int main(void)

{


   char arr = 'a';

   for ( arr = 'a'; arr <= 'z'; arr++)
   {
   
    if (arr == 'e')
       {
       
       continue ;
       }

       if (arr == 'q')
       {
       
        continue ;
       }

		    putchar(arr);
   }
   putchar('\n');
   return 0;


}
