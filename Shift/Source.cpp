#include <iostream>
using namespace std;
//#define SHIFT_TO_LEFT
#define SHIFT_TO_RIGHT
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t"; //Вывод элементов массива
	}
	cout << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	#ifdef SHIFT_TO_LEFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[i];
		for (int i = 0; i < n; i++)      // сдвиг влево
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
		for (int i = 0; i< n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;	
#endif
	
#ifdef SHIFT_TO_RIGHT
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n; i > 0; i--)       // сдвиг вправо
			{
				arr[i] = arr[i - 1];
			}
			arr[0] = buffer;
		}
	

for (int i = 0; i < n; i++)
{
	cout << arr[i] << "\t";
}
	cout << endl;
#endif
}