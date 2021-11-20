/*
Approach to Solve the FizzBuzz Challenge
You need to follow the approach below to solve this challenge:

a. Run a loop from 1 to 100.
b. Numbers that are divisible by 3 and 5 are always divisible by 15.
Therefore check the condition if a number is divisible by 15. If the number is divisible by 15, print "FizzBuzz".
c. Check the condition if a number is divisible by 3. If the number is divisible by 3, print "Fizz".
d. Check the condition if a number is divisible by 5. If the number is divisible by 5, print "Buzz".

// C++ program to implement the FizzBuzz problem based https://www.makeuseof.com/fizzbuzz-challenge/

Adapted version: Rui Machado
Date: 20/11/2021
*/

#include <iostream>
#include <string>
using namespace std;

class FizzBuzz {
	string Fizz = "Fuzz";
	string Buzz = "Buzz";
	string FizzBuzz = "FizzBuzz";
public:
	string checkFizzBuzz(const int & i);
};

//Implementation

string FizzBuzz::checkFizzBuzz(const int & i) {

	if (i % 15 == 0)
	{
		return FizzBuzz;
	}
	else if ((i % 3) == 0)
	{
		return Fizz;
	}
	else if ((i % 5) == 0)
	{
		return Buzz;
	}
	else
	{
		return to_string(i);
	}
}

int main()
{
	FizzBuzz o1;
	for (int i = 1; i <= 100; i++)
		cout << o1.checkFizzBuzz(i) << " ";

	return 0;
}