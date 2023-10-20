### at3
	Creates a random list of integer given the max random number and the # of places in the array and prints it
	Sorts the array and prints the array again
	
**Use:**
`$ ./at3 {Max random number} {# of numbers in the array}`
		
		./at3 10 3
		9
		3
		5
		Array Sorted:
		3
		5
		9
		

**Compile:**
`$ gcc --std=c11 at3.o print_arrays.o array_sort.o -o at3`
`$ gcc --std=c11 -c at3.c`
*or* 
`make {program}`
`make clean`

### at2
	Prints an array of floats to terminal
	
	given double arguments creates a list of doubles and sorts the list
	
Use:
`$ ./at2 .01 .03 .02 2 5 3 1`		
		
	Return:
		{list of doubles}
		
		***************
		.01
		.02
		.03
		1
		2
		3
		5
		
**Compile:**
`gcc --std=c11 at2.o print_arrays.o array_sort.o -o at2`
`gcc --std=c11 -c at2.c`
*or* 
`make {program}`
`make clean`
		
### array_sort
*Included in at2 and at3*
	
**Functions:**
`void sortArray(double a[], int size);`
- Sorts an array of doubles

`void makeRandArray(int randMax, int num_entries, int randArray[]);`
- Makes a random array of integers

`void sortArrayInt(int array[], int num_entries);`
- Sorts an array of integers
			
**Compile:**
`gcc --std=c11 -c array_sort.c`
*or* 
`make {program}`
`make clean`	

### print_array
*Included in at at2 at3*
	
**Functions:**
`void print_int_array(int a[], int size);`
- Prints an aray of integers

`void print_double_array(double a[], int size);`
- Prints an array of doubles

`void double_terminal_array(const char* array[], int num_entries, double arrayDouble[], int newNumEntry);`
- Creates a list of doubles from terminal given arguments
			
		
**Compile:**
- `gcc --std=c11 -c print_arrays.c`
*or* 
`make {program}`
`make clean`	

	
### at
*Utilizes print_arrays.h*

Creates and prints arrays of integer type
	
	
**Use:**
`$ ./at`
	
**Compile:**
`gcc --std=c11 at.o print_arrays.o -o at`
`gcc --std=c11 -c at.c`
*or* 
`make {program}`
`make clean`	

