#include <iostream>
using namespace std;

int main()
{
	/*
	 3- For statment: 
	----------------
	 for (init-statement; condition-expression; end-expression)
			statement

	1) The init-statement is evaluated. Typically, the init-statement 
		consists of variable definitions and initialization. 
		This statement is only evaluated once, when the loop is first executed.

	2) The condition-expression is evaluated. 
		If this evaluates to false, the loop terminates immediately. 
		If this evaluates to true, the statement is executed.

	3) After the statement is executed, the end-expression is evaluated. 
		Typically, this expression is used to increment or decrement the variables
		declared in the init-statement. 
		After the end-expression has been evaluated, the loop returns to step 2.
	*/

	for (int index = 0; index < 10; index++) // count defined here
		cout << index << endl;

	int i;
	for (i = 0; i < 10; i++)  
		cout << i << endl;

	int j = 0;
	for ( ; j < 10; j++)  
		cout << j << endl;

	 
	for (int ii = 0,  jj = 10; ii <= 10; ii++, jj--)
	{
		cout << ii  << "  " << jj << endl;
	}

	for (;;)
		cout << "This is an infinite loop" << endl;


	for (int index = 0; index < 10; index++)
	{
		if (index == 4)
			break;			// continue;		
		cout << index << endl;
	}
		


	int A[2][2] = { { 1, 2 },
					{ 3, 4 } };
	int B[2][2] = { { 5, 6 },
					{ 7, 8 } };
	int C[2][2] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			C[i][j]  = A[i][j] + B[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << C[i][j] << " " ;
		}
		cout << endl;
	}


	
	 
	//4- While statment:
	 

	int count = 0;				// init-statement
	while (count < 10)			// condition-expression
	{
		cout << count << " ";
		count++;				// end-expression
	}


	//5- do-While statment:
	do
	{
		cout << count << " ";
		count++;
	} while (count < 10);


	int number;
	do
	{
		cout << "Guess the number: " << endl;
		cin >> number;
	} while (number != 255);

	

	return 0;
}

