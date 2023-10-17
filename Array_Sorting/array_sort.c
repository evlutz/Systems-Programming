/*
* @author Evan Lutz (ewlutz)
* @usage at2.c at3.c
* Usage: sorta an array of doubles from smallest to largest
* 
*/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


/**

@brief Sorts a given double array in ascending order.
@param array[] The input array to sort.
@param num_entries The number of entries in the input array.
*/
void sortArray(double array[], int num_entries) {
	  int i; // Loop counter
	  
	  double max = 0;
	  
	  double min = 1000;
	  
	  double tempArray[num_entries];
	  
	  for(i=0; i<num_entries-1; i++){
	  	if(array[i] > array[i+1]){
	  		tempArray[i] = array[i+1];
	  		array[i+1]=array[i];
	  		array[i] = tempArray[i];
	  		sortArray(array, num_entries);
	  	}

	  }
}

/**

@brief Sorts a given integer array in ascending order.
@param array[] The input array to sort.
@param num_entries The number of entries in the input array.
*/

void sortArrayInt(int array[], int num_entries) {
	  int i; // Loop counter
	  
	  --num_entries;
	  int tempIntArray[num_entries];
	  
	  for(i=0; i<num_entries; i++){
	  	if(array[i] > array[i+1]){
	  		tempIntArray[i] = array[i+1];
	  		array[i+1]=array[i];
	  		array[i] = tempIntArray[i];
	  		sortArrayInt(array, num_entries);
	  	}
	  }

}

/**

@brief Generates a random integer array.
@param randMax The maximum value for the random numbers.
@param num_entries The number of entries in the array to generate.
@param randArray[] The generated random array.
*/

void makeRandArray(int randMax, int num_entries, int randArray[]){
	
	srand(time(NULL));
	
	for(int i = 0; i<num_entries; i++){
		randArray[i] = rand() % randMax;
		printf("%d\n", randArray[i]);
	}
}
