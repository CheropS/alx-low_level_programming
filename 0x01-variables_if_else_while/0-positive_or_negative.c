#include <stdlib.h>
#include <time.h>
/* 
 * Main: entry point
 * Description: Prints a random number either positive,zero, or negative 
 * Return: 0 if success. 
 */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n == 0)
					printf("%d is zero\n", n);
				else if (n > 0)
					printf("%d is positive\n", n);
				else
					printf("%d is negative\n", n);
					/* your code goes there */
					return (0);
}
