#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
/*
  @struct  student
  @brief Struct for a student
  
  Student struct holds char* of name, int of age and
  int graduate year
*/
typedef struct student {
	/*Name of student MAX 15 characters*/
	char* name[15];
	/*Age of student integer*/
	int age;
	/*Graduate year of student*/
	int gradYear
	} student;

/*Constructor for student struct*/
student *make_student(char *name, int age, int gradYear){
	student* newStd = (student*)malloc(sizeof(student));
	strcpy(newStd -> name, name);
	newStd -> age = age;
	newStd -> gradYear = gradYear;
	return newStd;
}


/*Function to print out student struct
  @param Student pointer
  Prints out all 3 variable
  */
void printStudent(student* diwalky){
	//student* diwalky;
	//diwalky.age = 19;
	//diwalky.gradYear = 2026;
	//*diwalky.name = "Diwakar";
	//diwalky = make_student("Diwakar", 19, 2026);
	printf("\nStudent Name: %s", diwalky->name);
	printf("\nStudent Age: %d", diwalky->age);
	printf("\nStudent Graduation Year: %d\n", diwalky->gradYear);
	
}
/*
Function that generates a random integer
pertaining to ascii code from A-Z
@returns a random Ascii code for A-Z
*/
int randomChar(){
	
	srand(time(NULL)); //Sets random seed
	int lowerBound = 26; //Lower bound of ascii
	int upperBound = 65; //Upper bound of ascii

	
	int randAscii = rand() % lowerBound+upperBound;
	
	//printf("%d", randAscii);s
	//printf("\n%c\n", (char)randAscii);
	
	return randAscii;
}
/*Function produces a random integer between 2 set values
  @param maximum possible integer generated
  @param lowest possible integer generated
  @return random integer
*/
int randomInt(int max, int min){
	srand(time(NULL)); //Sets random seed
	int randInt = min + (rand() % max - min + 1);
	return randInt;
}


/*
*  Generates a string of random printable characters
   with a given length
*  @param length of string
   @uses randomChar()
   @return a random string
*/
char *randomString(int length){
	int OFFSET_MAX = 5;
	int i = 0;
	int randOffset = rand() % OFFSET_MAX;
	//char *str = malloc(length*sizeof(char));
	char *str = (char*)malloc(length+1);
	char *randString = str;
	
	for( ; i < length; i++){
		srand(i);
		*(randString++) = (char)(randomChar());
	}

	
	randString[length] = '\0';

	return str;

}

/* Generates a student struct filled with random information
   @return student struct
*/
student* randStudent(){
	
	//student* randStud;
	student* randStud = make_student(randomString(4), randomInt(80, 16), randomInt(3000, 2000));
	//*randStud.name = randomString(4);

	return randStud;
}

/*
	Creates an array of Student structs and fills
	in each struct with random info
	@uses randStudent()
	@param # of structs in the array
	@return array of students
*/

student** makeStudentArray(int count){
	int i = 0;
	student** studArrayReal = (student*)calloc(count, sizeof(student));
	student** studArray = studArrayReal;
	
	for(; i<count; i++){
		*(studArray++) = randStudent();
	}
	
	return studArrayReal;
	
}

/*
	Prints out an array of students
	@param number of students in the array
	@param student array
*/
void printStudentArray(student** studArray, int count){

	int i = 0;
	student* currentStud;
	for(; i < count; i++){
		currentStud = *(studArray++);
		//if(i == 1){currentStud->age = randomInt(88, 16);}
		printStudent(currentStud);
		
		printf("Location in Memory: %p\n", (void*)&*currentStud);
	}
	
}

/*Generates a shallow copy of a given array of students
  and given then # of students in the array
  @param count integer
  @param array of students
  @returns new array of shallow copy*/
student** copyStudArrayShallow(int count, student** oldStudArray){
	int i = 0;
	student** newArray = (student*)calloc(count, sizeof(student));
	student** modArray = newArray;
	
	student* currentStud;
	student* test;
	for(; i < count; i++){
		currentStud = oldStudArray++;
		*(modArray++) = currentStud;
		//printStudent(currentStud);
		//*(modArray++) = currentStud;
	}
	//printStudentArray(newArray, 3);
	return newArray;
}



/*Frees the memory from an array of students
  @param # of students in the array
  @param Array of students
  @return void
  */
void freeStudentArray(int count, student** studArray){
	int i = 0;
	student* currentStud;
	size_t totalSize = 0;

	for(; i < count; i++){
		currentStud = *(studArray++);
		totalSize += sizeof(currentStud->name);
		//free(currentStud->name);
		totalSize += sizeof(currentStud->age);
		totalSize += sizeof(currentStud->gradYear);
		totalSize += sizeof(currentStud);
		free(currentStud);
	}
	

	printf("\n%ld Bytes freed\n", totalSize);
}




int main(){

	randomChar();
	printf("\n**********************STUDENT STRUCT************************\n");
	student *Evan = make_student("Evan Lutz", 19, 2026);
	printStudent(Evan);
	printf("\n**********************RANDOM ARRAY************************\n");
	printStudentArray(makeStudentArray(3), 3);
	student** testArray = makeStudentArray(3);	
	student** shallowCopy = copyStudArrayShallow(3, testArray);
	printf("\n**********************SHALLOW COPY************************\n");
	printStudentArray(shallowCopy, 3);
	freeStudentArray(3, *shallowCopy);
	
}

