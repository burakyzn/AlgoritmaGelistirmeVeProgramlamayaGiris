#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[100][100], trA[100][100], matrisBoyut;

	cout << "A(NxN) tipinde bir birim matris icin N sayisi girin :  ";
	cin >> matrisBoyut;

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			if (i == j)
			{
				A[i][j] = 1;
			}
			else
			{
				A[i][j] = 0;
			}
		}
	}

	cout << endl << "A Birim Matrisi " << endl
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

	cout << endl;
	system("pause");
}
