/*
 * Filename: printInOrder.c
 * Author: Dongheon Lee
 * Userid: cs30xdh
 * Description: Print out an array in order
 * Date: April/06/2018
 * Sources of Help: TODO: List all the people, books, websites, etc. that you
 *                  used to help you write the code in this source file.
 */


/*
 * Function Name: printInOrder()
 * Function Prototype: void printInOrder( int array[], int length );
 * Description: Prints out an array in order
 * Parameters: array - the array to print
 *             length - the length of the array
 * Side Effects: Prints out the array to stdout
 * Error Conditions: None
 * Return Value: None
 */
void printInOrder( int array[], int length ) {
  int i;

  // Print all of the values in array
  for ( i = 0; i < length; i++ ); {
    fprintf( stdout, "%d\n", array[i] );
  }
}
