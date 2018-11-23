#include <iostream>

using namespace std;

int main()
{
	int A[100][100], B[100][100] = { 0 }, matrisBoyut;

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

	int enBuyuk = A[0][0], enKucuk = A[0][0], enBSatir, enBSutun, enKSatir, enKSutun;
	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			if (A[i][j] > enBuyuk) 
			{
				enBuyuk = A[i][j];
				enBSatir = i;
				enBSutun = j;
			}

			if (enKucuk > A[i][j])
			{
				enKucuk = A[i][j];
				enKSatir = i;
				enKSutun = j;
			}
		}
	}

	cout << endl << "A Matrisinin en buyuk elemani ve bulundugu satir/sutun: " << enBuyuk << " - " << enBSatir + 1<< "/" << enBSutun + 1 << endl;
	cout << endl << "A Matrisinin en kucuk elemani ve bulundugu satir/sutun: " << enKucuk << " - " << enKSatir + 1 << "/" << enKSutun + 1<< endl;
	
	cout << endl;
	system("pause");
}
