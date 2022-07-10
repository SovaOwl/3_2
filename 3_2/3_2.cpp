#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
	int num = -999;

public:
	int nume = num;
	string choice;

	void conclusion()
	{

		if (choice == "+")
		{
			nume++;

		}
		else if (choice == "-")
		{
			nume--;

		}
		else if (choice == "=")
		{
			cout << nume << endl;

		}
		else if (choice == "x")
		{
			cout << "До свидания";

		}
	}
	
};


int main()
{
	setlocale(LC_ALL, "Rus");

	Counter coun;
	string op_ch, selection;
	int num = -999;

	cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
	cin >> op_ch;

	if (op_ch == "yes")
	{
		cout << "Введите начальное значение счётчика: ";
		cin >> num;
	}
	else if (op_ch == "no")
	{
		num = 1;
	}
	coun.nume = num;

	do
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> selection;
		coun.choice = selection;

		coun.conclusion();

	} while (selection != "x");
}
