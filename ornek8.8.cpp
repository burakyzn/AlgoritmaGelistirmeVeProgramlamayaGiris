#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[100][100], trA[100][100], matrisSatir, matrisSutun;

	cout << "A Matrisinin satir sayisini girin : ";
	cin >> matrisSatir;
	cout << "A Matrisinin sutun sayisini girin : ";
	cin >> matrisSutun;



	for (int i = 0; i < matrisSutun; i++)
	{
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << "A(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> A[i][j];
		}
	}

	int toplam = 0;
	for (int i = 0; i < matrisSatir; i++)
	{
		for (int j = 0; j < matrisSutun; j++)
		{
			trA[j][i] = A[i][j];
		}
	}


	cout << endl << "A Matrisi " << endl
		<< "---------" << endl;
	for (int i = 0; i < matrisSutun; i++)
	{
		cout << "| ";
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << endl << "A'nin Tranzpoze Matrisi " << endl
		<< "---------" << endl;
	for (int i = 0; i < matrisSutun; i++)
	{
		cout << "| ";
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << trA[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << endl;
	system("pause");
}
