#include <iostream>
using namespace std;

int BasicCalculator();

int main()
{
	BasicCalculator();
	return 0;
}

int BasicCalculator()
{
	char operation;
	float num1, num2;
	cout << "Enter desired operator, either + or - or * or /: ";
	cin >> operation;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	switch(operation)
	{
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
		    break;
		case '*':
			cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
		case '/':
			cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;
		default:
			cout << "Please check your operator";
			break;			
	}
}












