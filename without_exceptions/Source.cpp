#include <iostream>
using namespace std;

class List
{
private:
	int size;

public:
	List() : size(0) { }
	List(int s) : size(s) { }

	// Errors: 
	// CODE: 1 - List is empty
	// CODE: 2 - Position invalid
	int GetFromPosition(int pos)
	{
		if (size == 0) return 1001;
		if (pos < 1 || pos > size) return 1002;

		//working...
		return rand() % 10;
	}
};

void TestFunc(List l)
{
	int input;
	int code;
	do
	{
		cout << "Enter position to delete: ";
		cin >> input;
		code = l.GetFromPosition(input);

		if (code == 2) cout << "Invalid position, try again...\n";

	} while (code == 2);
}

int main()
{
	List list(3);

	int code = list.GetFromPosition(-1);

	switch (code)
	{
	case 1001: cout << "Empty error...!\n"; break;
	case 1002: cout << "Position error...!\n"; break;
	}
	
	TestFunc(list);

	system("pause");
	return 0;
}