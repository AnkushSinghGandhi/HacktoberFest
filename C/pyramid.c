/*
	Author: AnOnYmOus001100
	Date: 13/10/2020

	Description: To print a pyramid pattern with asterisks *, on number of row input
*/

#include <stdio.h>
int main() {
	// variable declaration
   int i, j, no_of_rows;

	// input prompt
   printf("Enter the number of rows: ");
   scanf("%d", &no_of_rows);
	// loop to print pattern
   for (i = 1; i <= no_of_rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
