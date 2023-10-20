## stacktest:

**Description:** 	

			Stacktest reverses the order of the given strings from the order they were given, utilizing a stack structure.

			Program takes in 1 argument for maximum amount of items,
			Stacktest than will goto the next line where, inputs can be given
			seperated by 'ENTER' once all lines are given the user can press 'ctrl+d'
			to run stacktest on given input.
			
			
			
**Compile Instructions:**
`gcc -g -c stacktest.c`
`gcc -g -c stack.c`
`gcc -g stacktest.o stack.o -o stacktest`

**Usage:**

**Step 1:** Compile program using the compile instruction
			
**Step 2:** type `./stacktest {maximum inputs}` into the trminal with all files in the local directory
			
**Step 3:** The program will go down a line and wait for input type lines of input with pressing `ENTER` for seperation
				
**Step 4:** After all inputs are given press `CTRL+D` to run the program
				
			
**Example:**
		
**Input:**	`./stacktest 5`
<br>			This is a line 
<br>			This is the second line
<br>			third line
<br>			fourth
<br>			Fifth and final line
			
**Output:**
<br>			Fifth and final line
<br>			fourth
<br>			third line
<br>			This is the second line
<br>			This is a line
			
			

## stacktest2:

**Description:** 	
			stacktest2 reverses the order of characters in the given strings from the order
			they were given

			Program takes in 1 argument for maximum amount of items,
			Stacktest2 than will goto the next line where, inputs can be given
			seperated by 'ENTER' once all lines are given the user can press 'ctrl+d'
			to run stacktest on given input.
			

			
**Compile Instructions:**
`gcc -g stacktest2.o stack.o -o stacktest2`
`gcc -g -c stacktest2.c`
`gcc -g -c stack.c`
			

**Instructions:**

**Step 1:** Compile program using the compile instruction
			
**Step 2:** type `./stacktest2 {maximum inputs}` into the trminal with all files in the local directory
			
**Step 3:** The program will go down a line and wait for input. Type lines of input with pressing `ENTER` for seperation
				
**Step 4:** After all inputs are given press `CTRL+D` to run the program
				
			
**Example:**	
		
*Input:*	`./stacktest2 4`

			This is a line
			This is the second line
			third line
			fourth
			Fifth and final line
			
*Output:*

			enil a si sihT
			enil dnoces eht si sihT
			enil driht
			htruof
			
			

## Piping stacktest and stacktest2:

			
	
**Instructions:**
	
**Step 1:** Follow the above steps above to compile stacktest and stacktest2
				
**Step 2:** To pipe the programs type `./stacktest {maximum inputs} | ./stacktest2 {maximum inputs}`
				
**Step 3:** The program will go down a line and wait for input Type lines of input with pressing `ENTER` for seperation
				
**Step 4:** After all inputs are given press `CTRL+D` to run the program
			
			
**Example:**	
		
*Input:*	`./stacktest 5 | ./stacktest2 5`

			This is a line
			This is the second line
			third line
			fourth
			Fifth and final line
			
*Output:*

			enil lanif dna htfiF
			htruof
			enil driht
			enil dnoces eht si sihT
			enil a si sihT
			
			
**OR**
				
				
*Input:*	`./stacktest2 5 | ./stacktest 5`

			This is a line
			This is the second line
			third line
			fourth
			Fifth and final line
			
*Output:*

			enil lanif dna htfiF
			htruof
			enil driht
			enil dnoces eht si sihT
			enil a si sihT

				
				

			
			
			
			
			
