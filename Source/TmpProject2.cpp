/** \file LabworkTMP.cpp
*/

#include <iostream>
/** \fn main точка входа в программу
*/
//! Функция main() − точка входа в программу.
/*! Программа демонстрирует метод быстрой сортировки
* С помощью метода быстрой сортировки можно отсортировать
* в среднем за O(nlogn)
*/

using namespace std;

void quicksort(__int8*, __int8, __int8);

int main(){
	int n = 0;
	__int8 last = 0;
	__int8 first = 0;
	cin >> n;
	cout << endl;

	__int8* a = new __int8[n];
	//! Массив заполняется char'ами
	for (int i = 0; i < n; i++){
		cout << "Vvedite " << i + 1 << " element" << endl;
		fflush(stdin);
		cin >> a[i];
		cout << endl;
	}
	last = n - 1;
	quicksort(a, first, last);

	for (int i = 0; i<n; i++)
		cout << a[i] << endl;

	system("pause");
	return 0;
}

/** \fn quicksort функция сортировки
*/
void quicksort(__int8* a, __int8 first, __int8 last){

	__int8 i = first;
	__int8 j = last;
	__int8 temp;

	__int8 x = a[(i + j) / 2];

	while (i <= j){
		while (a[i] < x) i++;
		while (a[j] > x) j--;

		if (i <= j){
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}

	if (i < last) quicksort(a, i, last);
	if (j > first) quicksort(a, first, j);
}

