﻿#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void index() {
	string fam[]{ "Абдулина", "Андронников", "Афанасьев", "Белогай", "Гайсина", "Гвоздев", "Горбачев", "Дихнич", "Дубина", "Кузьмин", "Михайлова", "Панченко", "Петренко", "Пешенкова",
		"Писарец", "Пуглеев", "Сидоренко", "Сиряева", "Соловей", "Тимофти", "Туманов", "Филатов", "Цыбульская", "Шамина", "Шевелев", "Юсим" };
		string x;
		cout << "Введите фамилию: "; cin >> x;
		for (int i = 0; i < sizeof(fam)/sizeof(fam[0]); i++) {
			if (x == fam[i]) {
				cout << "Номер в массиве - " << i << endl;
				break;
			}
			else if (i == (sizeof(fam) / sizeof(fam[0]) - 1)) {
				cout << "Ошибка ввода\n";
			}
		}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	index();
}