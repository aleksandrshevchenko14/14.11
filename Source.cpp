#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
	//Вариант 1
	//1 задан массив A, содержащий 10 целых чисел от 0 до 20. Найти произведение элементов этого массив.
	/*
	const int n = 10;
	int mas[n];
	int p = 1;
	for (int i = 0; i < n; i++) {
	mas[i] = rand()%21;
	p = mas[i] << ' ';
	cout << mas[i] * p;
	}
	cout << endl;
	cout << p << endl;*/
	//2 задан массив, который содержит 8 случайных целых чисел от -10 до 10. Найти сумму положительных элементов массива.
	/*
	const int n = 8;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
	mas[i] = rand() % 21-10;
	cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
	if (mas[i] > 0) {
		s += mas[i];
	   }
	}
    cout << "s=" << s << endl;*/
	//задан массив который содержит 16 случайных целых чисел от 0 до 20.найти количество элементов массива, которые делятся на 3 или на 5 или на 7.
	/*
	const int n = 16;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 3 == 0 && mas[i] % 5 == 0) {
			s++;
		}
	}
	cout << "s=" << s << endl;*/
	//задан массив из 9 целых чисел от -10 до 10. НАЙТИ СУММУ ЭЛЕМЕНТОВ МАССИВА которые являются четными числами.
	const int n = 9;
	int mas[n];
    srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21 - 10;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] % 2 == 0) {
			s += mas[i];
		}
	}
	cout << "s=" << s << endl;
}