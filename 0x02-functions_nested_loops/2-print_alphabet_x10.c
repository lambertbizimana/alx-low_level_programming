#include<stdio.h>


/**
 *
 *Main: check code
 *
 *
 *
 *
 *return : always 0
 *
 *
 */

 void print_alphabet_x10(void);

 int main()
{

  print_alphabet_x10();

  return 0;


}

void print_alphabet_x10(void)
{

  int c;
  char s;


  for (c=1; c<=10; c++)
  {
  
	  for(s='a'; s<='z'; s++)
	  {
	  
	    putchar(s);
	  
	  }
   
     putchar('\n');
  }

 putchar('\n');
}
