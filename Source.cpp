#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1. Задан массив A, содержащий 12 целых случайных чисел от - 5 до 5. Найти сумму элементов массива.
	/*const int n = 12;
	int mas[n];
	int sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 11 - 5; 
		cout << mas[i] << ' ';
		sum += mas[i];
	}
	cout << endl;
	cout << sum;*/

	//2. Задан массив, который содержит 13 случайных целых чисел от - 12 до 12. Найти произведение отрицательных элементов массива.
	/*const int n = 13;
	int mas[n];
	int pro = 1;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 25 - 12;
		cout << mas[i] << ' ';
		if (mas[i] < 0) {
			pro *= mas[i];
		}
	}
	cout << endl;
	cout << pro;*/


	//3. Задан массив, который содержит 11 случайных целых чисел от 0 до 20.
	//Найти количество элементов массива, которые делятся на 3 или на 5 или на 7
	/*const int n = 11;
	int mas[n];
	int k = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 20 - 0;
		cout << mas[i] << ' ';
		if (mas[i] % 3 == 0 || mas[i] % 5 == 0 || mas[i] % 7 == 0) {
			k++;
		}
	}
	cout << endl;
	cout << k;*/


	//4. Задан массив из 15 целых чисел  от 0 до 25. Найти сумму элементов массива, которые являются нечетными числами.
	/*const int n = 15;
	int mas[n];
	int sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 25 - 0;
		cout << mas[i] << ' ';
		if (mas[i] % 2 != 0) {
			sum = sum + mas[i];
		}
	}
	cout << endl;
	cout << sum;*/





	return 0;
}