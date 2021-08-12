// complex.cpp
// Multiplying complex numbers

#include <iostream>	// contains the definition of cout, endl
#include <complex>	// contains the complex class definition

using namespace std; // cout, endl, complex are all part of this namespace

int main()
{
    using complex_number = complex<float>;

    auto num1 = complex_number{2.0, 2.0};  // use auto for type deduction
	auto num2 = complex_number{4.0, -2.0}; // use uniform initialisation syntax (curly braces)

	auto answer = num1 * num2; // type deduced for 'answer' is: complex<float>

	cout << "The answer is: " << answer << endl;
	cout << "Or in a more familiar form: " << answer.real() 
			<< " + " << answer.imag() << "j" 
			<< endl	<< endl;

	// answer++; 

	//Exercise 3.1 answer
	// Line 21 doesn't work since answer is an object of the 'complex' class.
	// Therefore, it cannot be incremented since it is not a numercal value,
	// i.e., a float, int or double.

	return 0;
    }
