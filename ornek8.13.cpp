#include <iostream>

using namespace std;

int main()
{
	int A[100][100], matrisBoyut;

	cout << "A(NxN) tipinde matris icin N sayisi girin:  ";
	cin >> matrisBoyut;

	for (int i = 1; i < matrisBoyut+1; i++)
	{
		for (int j = 1; j < matrisBoyut+1; j++)
		{
			cout << "A(" << i << ")(" << j << ") = ";
			cin >> A[i][j];
		}
	}

	int toplam = 0;
	for (int i = 1; i < matrisBoyut; i++)
	{
		toplam += A[i][matrisBoyut - 1];
	}

	for (int i = 1; i < matrisBoyut; i++)
	{
		toplam += A[matrisBoyut - 1][i];
	}

	toplam -= A[matrisBoyut - 1][matrisBoyut - 1];

	cout << endl << "A Matrisi " << endl
		<< "---------" << endl;
	for (int i = 1; i < matrisBoyut+1; i++)
	{
		cout << "| ";
		for (int j = 1; j < matrisBoyut+1; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}

	cout << endl << "A Matrisinin sondan 1 onceki satir ve sutununun elemanlari toplami " << toplam << "'dir.";


	cout << endl;
	system("pause");
}
