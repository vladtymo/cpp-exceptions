#include <iostream>
#include <exception>
using namespace std;

double Div(double a, double b)
{
	int result = 0;

	if (b == 0)
		throw exception("Divide by zero");
	/*if (b == 1)
		throw 404;
	if (b == 5)
		throw "Divide by 5";*/

	result = a / b;
	cout << result << endl;
	return result;
}

int main()
{
	int a = 10, b = 0;
	cin >> a >> b;


	/*try
	{
		double res = Div(a, b);
		cout << "Result: " << res << endl;
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl;
	}*/

	/*try
	{
		Div(a, b);
	}
	catch (exception& ex)
	{
		cout << ex.what() << endl;
		cout << "...nu-nu-nu";
	}
	catch (int ex)
	{
		cout << ex << endl;
		cout << "error with 1...";
	}
	catch (const char * ex)
	{
		cout << ex << endl;
		cout << "other error...";
	}*/

	//(a, b);

	try
	{
		Div(a, b);
	}
	catch (exception& ex)
	{
		cout << ex.what() << "!" << endl;
	}
	catch (...)
	{
		cout << "Unknown exception";
	}

	cout << "\nContinue...\n";
	
	system("pause");
	return 0;
}