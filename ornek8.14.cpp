#include <iostream>

using namespace std;

int main()
{
	int A[100][100], B[100], matrisBoyut, bIndis = 0;

	cout << "A(NxN) tipinde matris icin N sayisi girin:  ";
	cin >> matrisBoyut;

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << "A(" << i+1 << ")(" << j+1 << ") = ";
			cin >> A[i][j];
		}
	}
	
	int toplam = 0;
	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			toplam += A[i][j];
		}
		B[bIndis] = toplam;
		toplam = 0;
		bIndis++;
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

	cout << endl << "B Dizisi" << endl
		<< "---------" << endl;
	for (int i = 0; i < bIndis; i++)
	{
		cout << B[i] << " ";
	}

	cout << endl;
	system("pause");
}
