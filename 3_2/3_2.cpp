#include <iostream>
#include <string>

using namespace std;

class Counter
{
private:
	int num = -999;

public:
	int nume = num;

	int increment()
	{
		return nume++;
	}
	int decrement()
	{
		return nume--;
	}
	int getValue()
	{
		return nume;
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

		if (selection == "+")
		{
			coun.increment();
		}
		else if (selection == "-")
		{
			coun.decrement();
		}
		else if (selection == "=")
		{
			cout << coun.getValue() << endl;
		}
		else if (selection == "x")
		{
			cout << "До свидания" << endl;
		}
		else
		{
			cout << "Не известная команда" << endl;
		}
	} while (selection != "x");

}
