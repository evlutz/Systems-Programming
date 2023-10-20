/** file at.c
 * @author Evan Lutz (ewlutz)
 *
 * Program to demonstrate fixed-size arrays in C.
 * Utilizes print_arrays.h
 *
 * Prints out an array of doubles up to 10 by increments of .1
 */

#include "print_arrays.h"
#include <stdlib.h>
#include <stdio.h>
#include "array_sort.h"

#define SAMPLE_DOUBLE_ARRAY_SIZE (100)

/** Main program for demonstrating arrays. It fills them and prints them.
 * @return 0, Indicating success.
 *
 *Example:
 *./at2
 *	0.00
 	0.10
 	0.20
 	...
 	4.40
 	4.50
 	..
 	9.90
 	
 
 	@param takes in arguments given from command line
 	creates an array of doubles
 	Sorts array of doubles
 	
 */



int main(int argc, const char* argv[]) {
  int i; // Loop counter
  double a[argc]; // Sample array for demonstration
  double g[SAMPLE_DOUBLE_ARRAY_SIZE]; // Sample array for demonstration

  // Fill the array with consecutive integers
  for (i = 1; i < SAMPLE_DOUBLE_ARRAY_SIZE; i++) {
    g[i] = (double)i/10;
  }
   print_double_array(g, SAMPLE_DOUBLE_ARRAY_SIZE);
  printf("**********************************\n\n\n");
  // Fill the array with consecutive integers
  int maxSize = 11;
  int arraySize = 0;
  double arrayDouble[maxSize];
  const char* array[argc];
  for (i = 0; i < argc; i++) {
    array[i] = argv[i];
    arraySize++;
  }
  
  if(arraySize<=maxSize){
    maxSize = argc-1;
    }

 
  
  
	  double_terminal_array(array, argc, arrayDouble, maxSize);
	
  	sortArray(arrayDouble, maxSize);
  
  	print_double_array(arrayDouble, maxSize);
  	
  	
  
  

  return 0; // Success!
}
