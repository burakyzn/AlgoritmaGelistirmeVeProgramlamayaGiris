#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[100][100], B[100][100], C[100][100], matrisSatir, matrisSutun;

	cout << "Matrislerin satir sayisini girin : ";
	cin >> matrisSatir;
	cout << "Matrislerin sutun sayisini girin : ";
	cin >> matrisSutun;



	for (int i = 0; i < matrisSutun; i++)
	{
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << "A(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < matrisSutun; i++)
	{
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << "B(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> B[i][j];
		}
	}

	int deger;
	for (int i = 0; i < matrisSutun; i++)
	{
		for (int j = 0; j < matrisSatir; j++)
		{
			deger = A[i][j] + B[i][j];
			C[i][j] = deger;
		}
	}

	
	cout << endl << "C (A+B) Matrisi " << endl
		<< "------------" << endl;
	for (int i = 0; i < matrisSutun; i++)
	{
		cout << "| ";
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << C[i][j] << " ";
		}
		cout << "| ";
		cout << endl;
	}


	cout << endl;
	system("pause");
}
