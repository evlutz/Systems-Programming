all: student ctest

student: student.o
	gcc student.o -o student
	
student.o: student.c
	gcc -c student.c

ctest: ctest.o mystring.o
	gcc ctest.o mystring.o -o ctest

ctest.o: ctest.c mystring.h student.h
	gcc -c ctest.c

mystring.o: mystring.c mystring.h
	gcc -c mystring.c

clean: 
	rm -f mystring.o ctest.o ctest student.o student
	
docs:
	doxygen
	cp -a -p html/. ~evan/public_html/cs2303_lab03

