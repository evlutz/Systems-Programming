all: at at2 at3

at: at.o print_arrays.o
	gcc --std=c11 at.o print_arrays.o -o at

at.o: at.c print_arrays.h
	gcc --std=c11 -c at.c
	
at2: at2.o print_arrays.o array_sort.o
	gcc --std=c11 at2.o print_arrays.o array_sort.o -o at2
	
at2.o: at2.c print_arrays.h array_sort.h
	gcc --std=c11 -c at2.c
	
at3: at3.o print_arrays.o array_sort.o
	gcc --std=c11 at3.o print_arrays.o array_sort.o -o at3
	
at3.o: at3.c print_arrays.h array_sort.h
	gcc --std=c11 -c at3.c

print_arrays.o: print_arrays.c print_arrays.h
	gcc --std=c11 -c print_arrays.c
	
array_sort.o: array_sort.c array_sort.h
	gcc --std=c11 -c array_sort.c
	
clean:
	rm -f at.o print_arrays.o at array_sort.o at2.o at2 at3 at3.o
	
docs:
	doxygen
	cp -a -p html/. ~evan/public_html/cs2303_hw02

