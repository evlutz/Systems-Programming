/** short program to demonstrate use of stack
 *
 * @author Blake Nelson, Evan Lutz
 * @param # of argument wanted, 
 The use will be prompted to type in words or scentences seperated
 by 'ENTER', once the user if finished, press 'ctrl+d' to run the program
 the resultant parameters wil
   then be spelled backwards
 */

#include <stdio.h>

#include <string.h>
#include "stack.h"
#include <stdlib.h>

//When DEBUG_TEST is not defined it should only print those popped from the stack
//Should print using peek when a item is pushed onto stack

//#define DEBUG_TEST




/** main function to demonstrate use of stack
 *
 */
int main (int argc, char *argv[]) {
  Stack *the_stack;	//Create the stacks
  Stack *temp_stack;
  Stack *temp2_stack;
  size_t length = 0;	//Length for getline() function
  char* inputString;	//Place holder for string input
  int item = atoi(argv[1]);	//Grabs argument for items from command line
  int x = 0;	//Counter to ensure while loop does not push too many items
  the_stack = create(item);	//Create the stack and fill with command line argument
  temp_stack = create(item);	//Create the temp stack and fill with command line argument

  //Adds items to stack from command line, accounts for maximum
  while(getline(&inputString, &length, stdin) != -1 && x<item){
  	//inputString = getline(&inputString, &length, stdin);
  	inputString[strlen(inputString)-1] = '\0';	//Accounts for terminator of gotten strings
  	
  	char* inputCopy = malloc(strlen(inputString) + 1);	//Creates space for string
  	strcpy(inputCopy, inputString);
  	
  	push(the_stack, inputCopy);	//Push command line arguments

	x++;	//Add to counter
	
}

//Item orders are reverse when gotten to command line
//Reverses order again
while(!isempty(the_stack)){
	push(temp_stack, pop(the_stack));
}

/*
  Pops items off of the stack
  utilizes temp stack to push characters from popped off element to new temp stack
  temp stack is than popped and characters are printed
  Cycles back through original stack to next string
*/
while (!isempty(temp_stack)) {		//Cycle through temp stack
    	char *element = (char *) pop(temp_stack);	
    	temp2_stack = create(strlen(element));		//Creates temp stack
    	
 	for(int j = 0; j<strlen(element); j++){		//Pushes characters from orginal element string on to new stacj
    		push(temp2_stack, (char) element[j]);	
    	}
    	while(!isempty(temp2_stack)){			//Pop elements off of character stack and print
    		printf("%c", pop(temp2_stack));
    	}
    	
    	printf("\n");	//Print line inbetween strings
   
  }

    	/*
    	Destroy and free all stacks
    	*/
    	destroy(the_stack);
    	destroy(temp_stack);
    	destroy(temp2_stack);

  return 0;
}

  
  
