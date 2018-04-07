/*
 * Filename: initArray.c
 * Author: Dongheon Lee
 * Userid: cs30xdh
 * Description: Initialize an array with odd numbers starting from 0
 * Date: April/06/2018
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */

// Used for initializing the values in the array
#define ODD_MULTIPLIER 2

/*
 * Function Name: initArray()
 * Function Prototype: void initArray( int array[], int length );
 * Description: Initializes values in an array to be odd integers starting
 *              from 0
 * Parameters: array - the array to initialize
 *             length - the length of the array
 * Side Effects: Initializes the values of the array
 * Error Conditions: None
 * Return Value: None
 */
void initArray( int array[], int length ) {
  int i = 0;

  while ( i < length ) {
    array[i] = ODD_MULTIPLIER * i + 1;
  }
}
