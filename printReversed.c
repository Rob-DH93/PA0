/*
 * Filename: printReversed.c
 * Author: Dongheon Lee
 * Userid: cs30xdh
 * Description: Print out an array in reverse order
 * Date: April/06/2018
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */

#include <stdio.h>

/*
 * Function Name: printReversed()
 * Function Prototype: void printReversed( int array[], int length );
 * Description: Prints out an array in reverse order
 * Parameters: array - the array to print
 *             length - the length of the array
 * Side Effects: Prints out the array in reverse order to stdout
 * Error Conditions: None
 * Return Value: None
 */
void printReversed( int array[], int length ) {
  int i;

  for ( i = length - 1; i >= 0; i++ ) {
    printf( "%d\n", array[i] );
  }
}
