#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Main : this is where a block of code will be executed
 *
 *
 *printf : it is a prefined function to display the result from executed code
 *
 *
 *
 *return: always return datatype example return 0 stop main to execute codes.
 *
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				
				if(n > 0)
				{
				
				 printf("%d is Positive\n", n);

				}
				else if(n == 0)
				{
				printf("%d is zero \n", n);
				}
				else
				{
				 printf("%d is Negative\n", n);
				}
					return (0);
}
