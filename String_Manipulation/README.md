

### Description:
Contains string manipulation, usage of student struct to create a student database in a modular program

## CTEST:

	Program to document mystrncpy, mystrcat, mystrncat, mystrlen, 
	
*Note: There are .exe to be created ctest.exe and student.exe both can be made with 'make all'*

**Setup Instructions:**

			1. Place all .c .h, and make file into one directory
			2. enter directory via terminal and run "make" or "make all"
				to build ctest and student
			3. ./ctest to run CTEST
			4. ./student to run student
	
## mystring.c
**Compile:**

			gcc ctest.o mystring.o -o ctest
			gcc -c ctest.c
			gcc -c mystring.c
	
**Functions:**

- `char *mystrcat(char *destination, const char *src)`

			Appends the src to the dest string, dest string must have enough
			space for the result
			@param original string
			@param string to be added onto destination
			@return concatinated string
		
			mystrcat("hello", " world!") -> "hello world!"
		
`char *mystrncat(char *destination, const char *src, size_t limit)`
		
			Appends the src to the dest string, dest string upto the given
			limited amount of characters
			@param original string
			@param string to be added onto destination
			@param limit of characters to copy
			@return concatinated string
		
  
`size_t mystrlen(const char *s)`

			Takes in a string and returns the length
			@param string
			@return size_t
 		 
 		 
`char *mystrndup(const char *src, size_t limit) `
		
			Duplicates a C-style string of characters up to the given
			character limit
			@param src Pointer to string to be copied
			@param limit of strings to copy
			@return Pointer to freshly-allocated string containing a duplicate of src or null if no memory is available



 		 
 	
 		 
 
 ## student.c
**Compile:**
`gcc student.o -o student`
`gcc -c student.c`
		
		Contains student struct and constructor.
		includes function to generate struct arrays, fill structs with random characters and ints
		create shallow copies of array of ints
 	
**Output:**
 		
		**********************STUDENT STRUCT**********************

		Student Name: Evan Lutz
		Student Age: 19
		Student Graduation Year: 2026

		**********************RANDOM ARRAY************************

		Student Name: AAAA
		Student Age: 55
		Student Graduation Year: 2815
		Location in Memory: 0x5632144278f0

		Student Name: AAAA
		Student Age: 55
		Student Graduation Year: 2815
		Location in Memory: 0x5632144279a0

		Student Name: AAAA
		Student Age: 55
		Student Graduation Year: 2815
		Location in Memory: 0x563214427a50

 	
 	
 	
 	
 	
 	
 	
 	
