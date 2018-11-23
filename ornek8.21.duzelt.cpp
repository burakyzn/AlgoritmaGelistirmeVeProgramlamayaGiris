#include <iostream>

using namespace std;

int main()
{
	int A[20][20], matrisBoyut;

	cout << "A(NxN) tipinde bir matris icin N tam sayisi girin : ";
	cin >> matrisBoyut;

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			cout << "A(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> A[i][j];
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

	int x = 0, y = 0, z = 0, w = 0, t = 0;
	

	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			if (i == j)
				x += A[i][i];

			if (i == matrisBoyut - 1 - i)
				y += A[i][j];

			if (j == 3)
				z += A[i][j];

			if (i + j > matrisBoyut - 1)
				w += A[i][j];
			
			if (i < j)
				t += A[i][j];
		}
	}
	
	int B[5] = { x,y,z,w,t };

	cout << "B Dizisi : " << endl;
	
	int enBuyuk, yer = 0;
	for (int i = 0; i < 5; i++)
	{
		enBuyuk = 0;
		for (int j = 0; j < 5; j++)
		{
			if (B[j] > enBuyuk)
			{
				enBuyuk = B[j];
				yer = j;
			}
		}
		cout << enBuyuk << " ";
		B[yer] = 0;
	}

	cout << endl;
	system("pause");
}
