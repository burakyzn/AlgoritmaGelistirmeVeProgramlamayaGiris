#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[100][100], matrisBoyut;

	cout << "A(NxN) tipinde matris icin N sayisi girin:  ";
	cin >> matrisBoyut;

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << "A(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> A[i][j];
		}
	}

	int toplam = 0;
	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			if (i + j < matrisBoyut-1)
			{
				toplam += A[i][j];
			}
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

	cout << endl << "A Matrisinin yedek kosegen icin ust ucgensel bolgenin elemanlarinin toplami " << toplam << "'dir.";


	cout << endl;
	system("pause");
}
