#include<iostream>
#include "calculator.h"
using namespace std;

int main()
{
	calculator calc(6,2);

	//int a = 12, b = 24;
	cout << calc.addition() << endl;
	cout << calc.subtraction() << endl;
	cout << calc.division() << endl;
	cout << calc.multiple() << endl;

	//calculator <double> calc1(15.5,5.5);
	////double c = 2.5, d = 4.0;
	//cout << calc1.addition() << endl;
	//cout << calc1.subtraction() << endl;
	//cout << calc1.division() << endl;
	//cout << calc1.multiple() << endl;
	return 0;
} 


