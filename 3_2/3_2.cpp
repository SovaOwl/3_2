#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
	int num = -999;

public:
	int nume = num;
	string choice, op_ch;

	void option_choise()
	{
		cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
		cin >> op_ch;

		if (op_ch == "yes")
		{
			cout << "Введите начальное значение счётчика: ";
			cin >> nume;
		}
		else if (op_ch == "no")
		{
			nume = 1;
		}
	}

	void conclusion()
	{
		do
		{
			cout << "Введите команду ('+', '-', '=' или 'x'): ";
			cin >> choice;

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
		} while (choice != "x");
	}
	
};


int main()
{
	setlocale(LC_ALL, "Rus");

	Counter coun;

	coun.option_choise();

	coun.conclusion();
}