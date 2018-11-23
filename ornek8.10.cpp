#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[100][100], B[100][100], C[100][100], matrisBoyut;

	cout << "A(NxN) ve B(NxN) tipinde matrisler icin N sayisi girin:  ";
	cin >> matrisBoyut;

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << "A(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << "B(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> B[i][j];
		}
	}

	int deger = 0;
	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			deger = 0;
			for (int k = 0; k < matrisBoyut; k++)
			{
				deger += A[i][k] * B[k][j];
			}
			C[i][j] = deger;
		}
	}

	cout << endl << "A Matrisi " << endl
		<< "---------" << endl;
	for (int i = 0; i < matrisBoyut; i++)
	{
		cout << "| ";
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << endl << "B Matrisi " << endl
		<< "---------" << endl;
	for (int i = 0; i < matrisBoyut; i++)
	{
		cout << "| ";
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << endl << "C(A.B) Matrisi " << endl
		<< "---------" << endl;
	for (int i = 0; i < matrisBoyut; i++)
	{
		cout << "| ";
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << endl;
	system("pause");
}
