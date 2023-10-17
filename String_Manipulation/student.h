/** student.h
 * @author Evan Lutz
 * 
*/
#ifndef STUDENT_H		// Remember guard
#define STUDENT_H
typedef struct student {
	char* name[15];
	int age;
	int gradYear
	} student;
	

// Function prototype(s):
student *make_student(char *name, int age, int gradYear);
void printStudent();
#endif
