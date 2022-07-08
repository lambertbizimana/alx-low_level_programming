
#include<stdio.h>
#include<string.h>


/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */



   void printputs(char *s);

   int main(void)
{
	char *str;

	str = "_putchar";

	printputs(str);

	return (0);




}

void printputs(char *s)
{

  int lengths;

  lengths=0;
  
 while (*s != '\0')
 {
 
   lengths++;
   s++;
 
 }

 lengths--;

 for(;  lengths>= 0; lengths-- )
 {
 
   putchar(s[lengths]);

 
 }
   putchar('\n');



}



