#include <iostream>
#include <clocale>

using namespace std;

/*
* Лабораторная работа 5. Поливцев Михаил, ИВТ-31. Задание 1 (с динамическим выделением памяти).
* Индивидуальный вариант 16.
* Дан массив размера N и целые числа K и L (1 ≤ K ≤ L ≤ N).
* Найти среднее арифметическое элементов массива с номерами от K до L включительно.
*/

int main() {
	setlocale(LC_ALL, "ru");

	int n, k, l;
	double s = 0;
	cout << "Введите размер массива, числа K и L соответственно >> ";
	cin >> n >> k >> l;
	if (!(1 <= k && k <= l && l <= n)) {
		cout << "неверный ввод";
		return 1;
	}
	int* lst;
	lst = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите элемент массива >> ";
		cin >> lst[i];
	}

	for (int i = k; i <= l; i++) {
		s += lst[i];
	}
	delete[] lst;
	s /= (l - k + 1);

	cout << s << endl;
}