#include<iostream>
using namespace std;

int main()
{
	int value1;
	double value2;
	
	cout << endl;
	
	cout << " Enter Value 1: ";
	cin >> value1;
	
	cout << " Enter Value 2: ";
	cin >> value2;
	
	cout << endl << endl;
	
	if(value1 < 0 || value2 < 0)
	{
		throw "Value1 or Value2 is Negative";
	}
	
	if(value2 == 0)
	{
		throw "Value2 is Zero";
	}
	
	if((value1 + value2) > 20)
	{
		throw "Sum is Greater than 20";
	}
	
	if((value1 * value2) > 20)
	{
		throw "Product is Greater than 20";
	}
	
	cout << " Addition = " << value1 + value2 << endl << endl;
	cout << " Subtraction = " << value1 - value2 << endl << endl;
//	cout << " Modulus = " << value1 % value2 << endl << endl;
	cout << " Multiplication = " << value1 * value2 << endl << endl;
	cout << " Division = " << value1 / value2 << endl << endl;
	
}
