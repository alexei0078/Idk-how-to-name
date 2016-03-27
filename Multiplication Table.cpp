#include <iostream>
using namespace std;

int MultiplicationTable();

int main()
{
	MultiplicationTable();
	return 0;
}

int MultiplicationTable()
{
	int num;
	cout << "Enter number to find its Multiplication Table: ";
	cin >> num;
	
	for (int a=1; a<=20; a++)
	cout << num << " * " << a << " = " << num*a << endl;
	return 0;
}
