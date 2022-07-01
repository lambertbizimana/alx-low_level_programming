#include<stdio.h>
int main(void)
{
 int i;
 long int li;
 char c;
 float f;
 long l;
 long long int lli;


 printf("Size of int : %lu Byte(s)\n ",  (unsigned long)(sizeof(i)));
 printf("Size of char: %lu Byte(s)\n" , (unsigned long)(sizeof(c)));
 printf("Size of float: %lu Byte(s)\n" , (unsigned long)(sizeof(f)));
 printf("Size of long: %lu Byte(s)\n" , (unsigned long)(sizeof(l)));
 printf("Size of long int: %lu Byte(s)\n" , (unsigned long)(sizeof(li)));
 printf("Size of long int: %lu Byte(s)\n" ,  (unsigned long)(sizeof(lli)));

 return 0;




}
