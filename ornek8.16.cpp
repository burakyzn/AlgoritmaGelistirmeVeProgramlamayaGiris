#include <iostream>

using namespace std;

int main()
{
	int A[100][100], B[100][100] = { 0 }, matrisBoyut ;

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
	
	for (int i = 0; i < matrisBoyut; i++)
	{
		for (int j = 0; j < matrisBoyut; j++)
		{
			if (A[i][j] != A[j][i])
			{
				esit = false;
				break;
			}
		}
	}
	
	if (esit == true)
	{
		cout << endl << "A Matrisi simetriktir." << endl;
	}
	else
	{
		cout << endl << "A Matrisi simetrik degildir." <<endl;
	}
	cout << endl;
	system("pause");
}
