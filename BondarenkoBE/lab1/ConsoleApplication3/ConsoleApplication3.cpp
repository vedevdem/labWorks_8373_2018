// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(0,"");
	float FirNum, SecNum;
	char Act;
    cout << "Input first number: ";
	cin >> FirNum;
	cout << "Input action: ";
	cin >> Act;
	cout << "Input second number: ";
	cin >> SecNum;
	switch (Act) {
	case '+':
		cout << FirNum << " " << Act << " " << SecNum << " = "<< FirNum + SecNum;
		break;
	case '-':
		cout << FirNum << " " << Act << " " << SecNum << " = " << FirNum - SecNum;
		break;
	case '*':
		cout << FirNum << " " << Act << " " << SecNum << " = " << FirNum * SecNum;
		break;
	case '/':
		if (SecNum != 0) {
			cout << FirNum << " " << Act << " " << SecNum << " = " << FirNum / SecNum;
			break;
		}
		else
		{
			cout << "Division by zero!";
			break;
		}
	default:
		cout << "Unknown sign!";
	}
	cout << endl;
	_getch();
	return 0;
}

