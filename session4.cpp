#include "stdafx.h"
#include <iostream>
using namespace std;

// Bit Twiddling Hacks
// http://graphics.stanford.edu/~seander/bithacks.html
//
// bit masking - set/clear

// Google C++ Style Guide
// https://google.github.io/styleguide/cppguide.html


/* Session 4: Functions
	
	Function:
		is a reusable sequence of statements {block of code} 
		designed to do a particular job.

	-Code Organization/Readablity
	-Code Reusability
	-Easy Error Handling

*/




// return_type  function_name(parameters....)
/*

Note that the return type does not indicate what specific value will be returned.
It only indicates what type of value will be returned.

A function can only return a single value back to the caller.

*/
int add(int x, int y);	// Function declaration/prototype  (forward declaration)
void foo(int  &value) 
{
	value = 6;
}
void getSinCos(double degrees, double &sinOut, double &cosOut)
{
	// sin() and cos() take radians, not degrees, so we need to convert
	const double pi = 3.14159265358979323846; // the value of pi
	double radians = degrees * pi / 180.0;
	sinOut = std::sin(radians);
	cosOut = std::cos(radians);
}

void swap_1(int* x, int* y) // not safe
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void swap_2(int &x, int &y) // references 
{ 
	int temp = x;
	x = y;
	y = temp;
}
//void printArray(const int *array, int length)
/*
This allows us to tell at a glance that printArray() 
won’t modify the array argument passed in, and will ensure we don’t do so by accident.


*/
void printArray(int *array, int length)
{
	//if (!array)
	//	return;

	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
}

// Function overloading
double *getSinCos(double degrees)
{
	// sin() and cos() take radians, not degrees, so we need to convert
	const double pi = 3.14159265358979323846; // the value of pi
	double radians = degrees * pi / 180.0;
	double sinOut = std::sin(radians);
	double cosOut = std::cos(radians);
	double sin_cos[]   {sinOut, cosOut};
	return sin_cos;
}

void showTheWeather(float Temperature, bool isCelsius=true){
	/// T(°C) = (T(°F) - 32) × 5/9
	if (!isCelsius)
	{
		Temperature = (Temperature - 32)*(5 / 9);
	}
	
		if (Temperature > 25)
			cout << "It is summer" << endl;
		else
			cout << "Tt is winter" << endl;

}

struct student{
	string Name;
	int age;
	float GPA;
};

int main()
{
	 
	 
	int result;
	// 2 and 3 here are calle arguments 
	result = add(2, 3);		// function call()
	cout << "The summ of 2 + 3 is: " << result << endl;

	int x = 10;
	int *p = &x;
	foo(x);
	cout << x << endl;

	double sin(0.0);
	double cos(0.0);

	// getSinCos will return the sin and cos in variables sin and cos
	getSinCos(30.0, sin, cos);

	std::cout << "The sin is " << sin << '\n';
	std::cout << "The cos is " << cos << '\n';


	int array[6] = { 6, 5, 4, 3, 2, 1 }; // remember, arrays decay into pointers
    printArray(array, 6); // so array evaluates to a pointer to the first element of the array here, no & needed

	student st1, st2;

	st1.Name = "Naser";
	st1.age = 25;
	st1.GPA = 3.0;

	st2 = { "Ahmed", 14, 2.5 };


	return 0;
}

// Function definition
// The one definition rule (or ODR for short) is a well-known rule in C++.
int add(int x, int y)
{
	return (x + y);
}
}