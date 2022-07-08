#include<stdio.h>

/**
 *Main: check the code
 *
 *
 *
 *Return: Always 0
 *
 */

void  print_alphabet(void);

int main(void)
{
    print_alphabet();
    return (0);
}


void print_alphabet()
{

 char c='a';

 while(c<='z')
 {
 
 putchar(c);
 c++;
 
 
 }

  putchar('\n');




}

