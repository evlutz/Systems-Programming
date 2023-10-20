/** file print_arrays.c
 * @author Evan Lutz ewlutz
 *
 * Functions for printing arrays.
 */

#include <stdio.h>
#include <stdlib.h>
#include "print_arrays.h"

/**
 * @brief Prints an integer array to the console.
 * 
 * This function takes an integer array and the number of entries in the array as input and prints    *  each 
 * entry on a new line.
 * 
 * @param integer array to be printed.
 * @param The number of entries in the array.
 * 
 * @return void
 */

void print_int_array(int a[], int num_entries) {
  int i; // Loop counter

  for (i = 0; i < num_entries; i++) {  //Should nut be =< bc it acesses random place in memory
    printf("%d\n", a[i]);
  }
}



/**
 * @brief Prints a double array to the console.
 * 
 * This function takes a double array and the number of entries in the array as input and prints each 
 * entry with two decimal places on a new line.
 * 
 * @param a[] The double array to be printed.
 * @param num_entries The number of entries in the array.
 * 
 * @return void
 */

void print_double_array(double a[], int num_entries) {
	  int i; // Loop counter

  for (i = 0; i < num_entries; i++) {  //Should nut be =< bc it acesses random place in memory
    printf("%.2f\n", a[i]);
  }
}



/**
 * @brief Converts an array of strings to an array of doubles.
 * 
 * This function takes an array of strings and the number of entries in the string array, and converts 
 * each string to a double value. The resulting double values are stored in a separate array of doubles.
 * 
 * @param array[] The array of strings to be converted.
 * @param num_entries The number of entries in the string array.
 * @param arrayDouble[] The array to store the converted double values.
 * @param maxEntry The maximum number of entries that can be stored in the double array.
 * 
 * @return void
 */

void double_terminal_array(const char* array[], int num_entries, double arrayDouble[], int maxEntry) {


	  int i; // Loop counter
	  arrayDouble[maxEntry];
	for (i = 1; i < num_entries; i++) {
   		arrayDouble[i-1] = atof(array[i]);
   		if (i > maxEntry){
		printf("Error: too many arguments passed in terminal\n");
		break;
	}
  }
  
}

