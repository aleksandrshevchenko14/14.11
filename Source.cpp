#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
	//������� 1
	//1 ����� ������ A, ���������� 10 ����� ����� �� 0 �� 20. ����� ������������ ��������� ����� ������.
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
	//2 ����� ������, ������� �������� 8 ��������� ����� ����� �� -10 �� 10. ����� ����� ������������� ��������� �������.
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
	//����� ������ ������� �������� 16 ��������� ����� ����� �� 0 �� 20.����� ���������� ��������� �������, ������� ������� �� 3 ��� �� 5 ��� �� 7.
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
	//����� ������ �� 9 ����� ����� �� -10 �� 10. ����� ����� ��������� ������� ������� �������� ������� �������.
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