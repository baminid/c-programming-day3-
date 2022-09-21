#include <stdio.h>
int main()
{
   int first, second, *x, *n, sum;

   printf("Enter two integer to add\n");
   scanf("%d%d", &first, &second);

   x = &first;
   n = &second;

   sum = *x + *n;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}
