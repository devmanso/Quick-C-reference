// A quick reference of the C programming language in one c file.
// by Mansour Quddus (@devmanso : github)

// use #include to use functions, variables, etc from header files
// header files have the .h extention
// source files have the .c extention
#include <stdio.h>


// FUNCTIONS

// to create functions/methods/subroutines you must:
// declare the function before using it, a function declaration
// must have a return type, name, and parameters (if any)
// it is typically declared before main(), a function must also
// be defined, the definition of a function is what the function does
// here is an example:
int add(int x, int y) {
	int result = x + y;
	return result;
}


// the main() function is the entry point of the program
int main() {
	// printing out to the console
  printf("Hello World\n");

	// DATA TYPES
	// char arrays can be used to make strings
	char name[] = "John";
	char single = 'a';

	// declare an array by specifying the array's data type,
	// name and size, as shown here:
	int myIntArray[4] = {1,4,3,2};
	int value_at_first_indice = myIntArray[0];
	// remember that array indices start from 0, and end at
	// the array size - 1

	//you can also assign or reassign values in an element of an array
	myIntArray[5] = 7;
	
	// the size of an array can be automatically determined
	int nums[] = {0, 1, 7, 2, 4, 6};
	
	// ints are whole numbers only
	int integer = 7;

	// floats can represent decimals
	float decimal = 1.23;

	// doubles are double-precision floats,
	// this means that they are more computationally expensive
	// but in return they produce more accurate results
	double another_decimal = 32423.1231;

	// constants are variables that cannot be modified
	const int constant = 2;

	// long is used to represent a number that can't fit into an int
	// because there is not enough memory.
	long big_number = 32769;

	// signed vs unsigned
	// signed: variables can be negative, positive, or 0
	// unsigned: variables can only be 0 or positive
	signed int s_twenty = -20;
	unsigned int un_twenty = 20;

	// Declare an integer variable and a pointer to an integer
	int x = 5;
	int *p;

	// assign the address of the integer variable to the pointer
	p = &x;

	// print out the value of x and the address stored in the pointer
	printf("x is %d\n", x);
	printf("pointer to x is %p\n", p);

	// use the derefrence operator to (*) to access the value
	// stored at the address pointed to by the pointer
	printf("value at pointer is %d\n", *p);

	//the "auto" keyword is used to declare local variables with 
	// automatic storage duration. Automatic variables are variables 
	// that are created when a function is called and destroyed when the
	// function returns. They are typically stored on the stack and are
	// not accessible outside the function in which they are declared.
	auto int myVar = 6;

	// conditional statements
	if (myVar == 5) {
		printf("myVar is equal to 5");
		// this code will be run
	} else {
		printf("myVar is not equal to 5");
		// this code will not run
	}

	
	
  return 0; // 0 indicates that the program has executed successfully
	// any other number means that an error has occurred
}

