/** mystring.c
 * @author Mike Ciaraldi, Blake Nelson
 @editor Evan Lutz
 * Custom versions of some of the C-style string functions
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
// Have to #include stdlib.h because it is needed to use malloc()
#include "mystring.h"

/*
	Appends the src to the dest string, dest string must have enough
	space for the result
	@param original string
	@param string to be added onto destination
	@return concatinated string
*/
char *mystrcat(char *destination, const char *src){
	size_t i;
	size_t sizeOfStrSrc = mystrlen(src) + 1; //Includes buffer for '\0'
	
	size_t sizeOfStrDes = mystrlen(destination);
	
	
	for(i= 0; src[i] != '\0'; i++){
	
		destination[sizeOfStrDes + i] = src[i]; //Goes to end of destination and begins adding chars
	}
		destination[sizeOfStrDes+i] = '\0';	//Added buffer
	
	
	return destination;
}

/*
	Appends the src to the dest string, dest string upto the given
	limited amount of characters
	@param original string
	@param string to be added onto destination
	@param limit of characters to copy
	@return concatinated string
*/
char *mystrncat(char *destination, const char *src, size_t limit){
	size_t i;
	size_t sizeOfStrSrc = mystrlen(src) + 1; //Includes buffer for '\0'
	
	size_t sizeOfStrDes = mystrlen(destination);
	
	for(i= 0; src[i] != '\0' && i< limit; i++){
	
		destination[sizeOfStrDes + i] = src[i];
		}
		destination[sizeOfStrDes+i] = '\0';
	
	
	return destination;
	
}

/*Takes in a string and returns the length
  @param string
  @return size_t */
size_t mystrlen(const char *s){
	size_t i;

	for(i = 0; s[i] != '\0'; ++i){
		size_t size = malloc(s);
	}

	return i;

}

/** Duplicates a C-style string given a destination point.
 @param src Pointer to string to be copied
 @param destination Pointer to a place in data the user wants the string copied
 @returns pointer to the new destination string
*/
char *mystrcpy(char *destination, const char *src){

	size_t i;
	char *ptr = destination;
	size_t sizeOfStr = mystrlen(src) + 1; //Includes buffer for '\0'
	//destination = (char *)malloc(sizeOfStr);
	
	
	for(i= 0; *src != 0; i++){
		*destination= *src;
		destination++;
		src++;
	}
	
	return ptr;
}

/** Duplicates a C-style string up to the limited
 amount of characters given too the given a destination point 
 @param src Pointer to string to be copied
 @param destination Pointer to a place in data the user wants the string copied
 @param limit character copy limit
 @returns pointer to the new destination string
*/
char *mystrncpy(char *dest, const char*src, size_t limit){
	char* ptr = dest;
	int length = mystrlen(src);
	dest = malloc(limit);
	if(length>limit){
		length = limit;
	}
	int i =0;
	for(; i < length && src[i] != '\0'; i++){
		*ptr++ = *src++;
	}
	dest[i] = '\0';
	
	return dest;
}





/** Duplicates a C-style string.
 @param src Pointer to string to be copied
 @return Pointer to freshly-allocated string containing a duplicate of src
         or null if no memory is available
*/
char* mystrdup(const char* src) {
  int length; 	// Length of the source string
  char* newstr; // Pointer to memory which will hold new string

  //length = strlen(src) + 1; //OG
  length = mystrlen(src) + 1; 		// Leave space for the terminator
  newstr = (char*) malloc(length); 	// Must cast!

  // If no memory was available, return null pointer immediately
  if (newstr == 0) {
	return (char *) 0;
  }

  // Otherwise, copy the string and return pointer to new string
  strcpy(newstr, src);
  return newstr;
}

/** Duplicates a C-style string of characters up to the given
character limit
 @param src Pointer to string to be copied
 @param limit of strings to copy
 @return Pointer to freshly-allocated string containing a duplicate of src
         or null if no memory is available
*/

char *mystrndup(const char *src, size_t limit){
	int length;
	char*newstr = (char*) malloc(limit+1);
	
	char *ptr = newstr;
	int i = 0;
	
	length = mystrlen(src);
	if(length>limit){
		length = limit;
	}

	*ptr = strncpy(newstr, src, length);

	
	newstr[limit+1]='\0';
	return strncpy(newstr, src, limit);
}


