#include "print_arrays.h"
#include "array_sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
* @author Evan Lutz (ewlutz)
* @brief creates a random array of integers, prints random array
* Then sorts the array and print the again
*
*@usage array_sort.h print_arrays.h
*
* @error returns error if given to many arguments
*/

int main(int argc, const char* argv[]){

	if(argc != 3){
	printf("Error: Incorrect # of arguments given. ./at3 {Rand Max}, {# of entries}\n");
	return 1;
	}

//./at3 maxRand, numb Entries
int randMax  = atoi(argv[1]);
int num_entries = atoi(argv[2]);

int randArray[num_entries];
	

	makeRandArray(randMax, num_entries, randArray);
	
	sortArrayInt(randArray, num_entries);
	
	printf("Array sorted:\n");
	print_int_array(randArray, num_entries);
}
