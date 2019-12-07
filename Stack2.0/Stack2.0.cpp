#include <iostream>
#include <Windows.h>
using namespace std;

int const MAXSIZE = 100;
char stack[MAXSIZE];
int vertex = -1;

bool push(char c)
{
	if (vertex < MAXSIZE)
	{
		vertex++;
		stack[vertex] = c;
		return true;
	}

	return false;
}
bool isempty()
{
	if (vertex < 0)
		return true;

	return false;
}
char pop()
{
	if (isempty())
		return NULL;

	char value = stack[vertex];
	vertex--;
	return value;
}

char top()
{
	return stack[vertex];
}



int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	bool stackisset = true;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
	cout << "* * * * * * *											 * * * * * * * * " << endl;
	cout << "* * * * * * *  Р А Б О Т А		С О		С Т Е К А М И    * * * * * * *" << endl;
	cout << "* * * * * * *											 * * * * * * * * " << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
	while (stackisset)
	{
		int cmd;
		string c;

		cout << "Введите номер команды:" << endl;
		cout << "1) push - положить" << endl;
		cout << "2) pop - снять" << endl;
		cout << "3) top - посмотреть" << endl;
		cout << "4) isempty - пуст ли стек" << endl;
		cout << ">> ";
		cin >> cmd;
		cin.clear();

		switch (cmd)
		{
		case 1:
			cout << "Добавьте желаемый символ в стек: " << endl;
			cout << ">> ";
			cin >> c;
			cin.clear();
			if (push(c[0]))
				cout << "Элемент '" << c[0] << "' - успешно добавлен!" << endl << endl;
			else
				cout << "Ошибка переполнения стека с максимальным размером в " << MAXSIZE << endl << endl;
			break;
		case 2:
			cout << "Взят верхний элемент стека - " << pop() << endl;
			cout << endl;
			break;
		case 3:
			cout << "Просмотрен верхний элемент стека - " << top() << endl;
			cout << endl;
			break;
		case 4:
			cout << "Стек пуст? " << endl;
			if (isempty()) cout << "yes"; else cout << "no";
			cout << endl;
			cout << endl;
			break;
		default:
			cout << "Неверное имя команды" << endl;
			break;
		}
	}
	return 0;
}

