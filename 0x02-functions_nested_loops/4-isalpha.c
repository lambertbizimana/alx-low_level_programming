#include<stdio.h>
#include<ctype.h>

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
 *
 *
 *
 */


int _isalpha(int c);

int main()
{


   int r;

    r = isalpha('H');
    putchar(r + '1');
    r = isalpha('E');
    putchar(r + '1');
    r = isalpha('L');
    putchar(r + '1');
    r = isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);




}
