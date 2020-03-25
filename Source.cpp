#include<iostream>
#include<windows.h>
#include<ctime>
void showMenu();
int funcSum(int a, int b);
int difference(int a, int b);
int mult(int a, int b);
int division(int a, int b);
int power(int a, int b);
int mySqrt(int a, int b, int c);
using namespace std;
int main()
{
	char select;
	int a;
	int b;
	int c = 0;
menu:
	showMenu();
	cin >> select;
	switch (select)
	{
	case '+':
		cout << " Enter values : \n";
		cin >> a >> b;
		cout << "\t\t" << a << "+" << b << "=" << funcSum(a, b) << endl << endl;
		goto menu;
		break;
	case '-':
		cout << " Enter values : \n";
		cin >> a >> b;
		cout << "\t\t" << a << "-" << b << "=" << difference(a, b) << endl << endl;
		goto menu;
		break;
	case '*':
		cout << " Enter values : \n";
		cin >> a >> b;
		cout << "\t\t" << a << "*" << b << "=" << mult(a, b) << endl << endl;
		goto menu;
		break;
	case '/':
		cout << " Enter values : \n";
		cin >> a >> b;
		cout << "\t\t" << a << "/" << b << "=" << division(a, b) << endl << endl;
		goto menu;
		break;
	case '^':
		cout << " Enter values : \n";
		cin >> a;
		cout << " Enter power : \n";
		cin >> b;
		cout << "\t\t" << a << "^" << b << "=" << power(a, b) << endl << endl;
		goto menu;
		break;
	case '1':
		cout << " Enter value : \n";
		cin >> a;
		c = 0;
		b = 2;
		/*for (int i = 0; i < a / b; i++)
		{
			if ((i * i) == a)
			{
				c = i;
				break;
			}
		}*/
		cout << "\t\t" << "sqrt" << a << "\t=" << mySqrt(a, b, c) << endl << endl;
		goto menu;
		break;
	default:
		cout << " You can enter only sing from menu !!!! \n\n";
		goto menu;
		break;
	}
}
void showMenu()
{
	cout << "\t\t Select option :\n"
		"\t '+'\t addition\n"
		"\t '-' \t subtraction \n"
		"\t '*' \t multiplication \n"
		"\t '/' \t division \n"
		"\t '^' \t raise to the power \n"
		"\t '1' \t extract square root \n"
		"\t '0'\t exit the program\n";
}
int funcSum(int a, int b)
{
	return  a + b;
}
int difference(int a, int b)
{
	return a - b;
}
int mult(int a, int b)
{
	return a * b;
}
int division(int a, int b)
{
	return  a / b;
}
int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result *= a;
	}
	return result;
}
int mySqrt(int a, int b, int c)
{

	for (int i = 0; i < a / b; i++)
	{
		if ((i * i) == a)
		{
			c = i;
			break;
		}
	}
	return c;
}


	
		
		
		
		
		






