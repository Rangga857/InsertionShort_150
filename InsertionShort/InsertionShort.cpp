#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{
	while (true)
	{
		cout << "Masukkan jumlah data pada Array : ";
		cin >> n;

		if (n <= 20)
		{
			break;

		}
		else
		{
			cout << "n\Array yang anda masukkan maksimal 20 elemen. \n";

		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}

