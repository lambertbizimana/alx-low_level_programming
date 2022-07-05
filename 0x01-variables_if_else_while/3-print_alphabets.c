#include <stdio.h>


/**
 *
 *Main: to executes block of alphabetical
 *
 *
 *
 *return 0 always
 *
 */

int main(void)

{

 char arr  = 'a';
 char arr1 = 'A';

 for (arr= 'a'; arr <= 'z'; arr++ )
 {
 
     putchar(arr);

  }

 for(arr1 = 'A'; arr1 <= 'Z'; arr1++)
 {
 
 putchar(arr1);
 }

putchar('\n');
 return 0;




}
