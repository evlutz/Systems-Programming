/** short program to demonstrate use of stack
 *
 * @author Blake Nelson, Evan Lutz
 * @param # of argument wanted, 
 The use will be prompted to type in words or scentences seperated
 by 'ENTER', once the user if finished, press 'ctrl+d' to run the program
 the resultant parameters wil
   then be spelled backwards
 */
#include <string.h>
#include <stdio.h>

#include "stack.h"
#include <stdlib.h>

//When DEBUG_TEST is not defined it should only print those popped from the stack
//Should print using peek when a item is pushed onto stack

//#define DEBUG_TEST




/** main function to demonstrate use of stack
 *
 */
int main (int argc, char *argv[]) {


size_t length = 0;



char* inputString;
  int item = atoi(argv[1]);	//Grab command line argument as stack maximum		
  Stack *the_stack;		//Create stack
  the_stack = create(item);	//Create stack with given amount of items
  int x = 0;			//Counter to make sure the correct amount of items are added
  
  //Adds items to stack from command line, accounts for maximum
  while(getline(&inputString, &length, stdin) != -1 && x<item) {	
  	inputString[strlen(inputString)-1] = '\0';
  	
  	char* inputCopy = malloc(strlen(inputString) + 1);	//Allocate space for each string
  	strcpy(inputCopy, inputString);
  	
  	push(the_stack, inputCopy); //Push items onto stack
	x++;
	
	}

 // char *test_data[] = {"first", "second", "third", "fourth", "fifth"};	//OG
  

  



  //printf ("sizeof(test_data)) == %ld\n", sizeof(test_data));			//OG
  
  // Push some test data onto the stack
  #ifdef DEBUG_TEST
  
  /*
  for (int i = 0; i < item; i++) {						//OG
  
    printf("pushing element \"%s\"\n", test_data[i]);
    push(the_stack, test_data[i]);
  
    printf("top of stack now \"%s\"\n", (char *) peek(the_stack));
  
  }

  */
  //***************DEBUG ONLY********************
  // Pop the elements off the stack and print them
  while (!isempty(the_stack)) {			
    
    char *element = (char *) pop(the_stack);
    printf("%s\n", element);
 
  }
  
  #else

 /*										//OG

    while (!isempty(the_stack)) {
    	char *element = (char *) pop(the_stack);
    	//printf("%s\n", element);
    	push(temp_stack, element);	//Push onto new stack
  
  }
    */
    
    //************NOT DEBUG********************
    // Pop the elements off the stack and print them
	while(!isempty(the_stack)){
    	   printf("%s\n", pop(the_stack));
    	}
  
  #endif
      	destroy(the_stack);	//Free stack from memory


  return 0;
}

  
  
