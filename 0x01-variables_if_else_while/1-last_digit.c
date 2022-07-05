#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;
		int  digit;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
			      digit = n%10;
			      
			      if(digit > 5)
			      {
			      printf("Last digit of %d is %d and greater than 5\n",n,digit);
			      
			      }
			      else if (digit == 0)
			      {
			       printf("Last digit of %d is %d  and is 0\n", n,digit);
			      
			      }
			      else if (digit < 6)
			      {
			      printf("Last digit of %d is %d  and is less than 6 not 0\n",n, digit);
			      
			      }
			      else
			      {
			      printf("Invalid input number");
			      }

					return (0);
}
