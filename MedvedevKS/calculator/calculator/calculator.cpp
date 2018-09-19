#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
	float left, right, result; char sign;
	setlocale(0, "");
	cout << "¬ведите левый оперант: " << endl;
	cin >> left;
	cout << "¬ведите правый оперант: " << endl;
	cin >> right;
	cout << "¬ведите знак выражени€:" << endl;
	cin >> sign;
	while (!(sign == '+' || sign == '-' || sign == '*' || sign == '/'))
	{
		cout << "¬ведите правильный знак: " << endl;
		cin >> sign;
	}

	switch (sign)
	{
	case'+':
		result = left + right;
		break;
	case'-':
		result = left - right;
		break;
	case'*':
		result = left*right;
		break;
	case'/':
		result = left / right;
		break;
	}

	cout << "–езультат: " << endl << left << sign << right << "=" << result;
	_getch();
	return 0;
}