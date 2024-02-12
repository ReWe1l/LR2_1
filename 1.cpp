
#include <iostream>
#include <locale>
#include <cmath> 
using namespace std;
		
int task1() {
	locale::global(locale("Russian_Russia.1251"));
  
	cout << "Выражение по условию: x * sin(y) + sqrt(fabs(x * y))" << endl;

	double x, y, z;

	cout << "Введите x: ";
	cin >> x;

	if (cin.fail()) {
		cout << "Ошибка! Вы ввели не вещественное число!" << endl;
		return 1;
	}

	cout << "Введите y: ";
	cin >> y;

	if (cin.fail()) {
		cout << "Ошибка! Вы ввели не вещественное число!" << endl;
		return 1;
	}
			
	z = x * sin(y) + sqrt(fabs(x * y));
	cout << "Итог: " << z << endl;

	return(0);
}

int task2() {
	locale::global(locale("Russian_Russia.1251"));

	int age;

	cout << "Введите возраст: ";

	cin >> age;

	if (age < 20 || age > 40) {
		cout << "Ошибка: введён неверный возраст!" << endl;
		return 1;
	}

	string konec;

	switch (age % 10) {
	case 1:
		konec = "год";
		break;
	case 2:
	case 3:
	case 4:
		konec = "года";
		break;
	default:
		konec = "лет";
	}

	cout << "Вы ввели возраст: " << age << " " << konec << endl;

	return 0;

}

int main() {
	
	locale::global(locale("Russian_Russia.1251"));

	int task;

	cout << "Выберите задание посредством ввода числа 1 или 2 соответственно: ";
	cin >> task;

	if (task == 1) {
		task1();
	} else {
		task2();
	} 
}


