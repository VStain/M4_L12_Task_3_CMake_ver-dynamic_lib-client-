#include "LeaverLibraryDynamic.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	SetConsoleOutputCP(1251); // Устанавливаем кодировку консоли на UTF-8
	SetConsoleCP(1251); // Устанавливаем кодировку для ввода с консоли на UTF-8

	LeaverLibraryDynamic::DynamicLeaver Leaver;
	string name;

	cout << "Введите имя: ";
	getline(cin, name); // Используем getline для считывания строки

	string hello = Leaver.leave(name);
	cout << hello;

	return 0;
}