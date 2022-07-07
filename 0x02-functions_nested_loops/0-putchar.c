
#include<stdio.h>
#include<string.h>
#define NAME "_putchar"



void printputch(char *s);

int main()
{

	char s[]="_putchar";
	printputch(s);
        putchar('\n');

return 0;


}

void printputch( char *s)
{

int i=0;

while(s[i] != '\n' && s[i] != '\0' )
{

 putchar(s[i]);

 i++;



}


}


