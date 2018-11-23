#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[100][100], matrisSatir, matrisSutun;

	cout << "Olusturmak istediginiz matrisin satir sayisini girin : ";
	cin >> matrisSatir;
	cout << "Olusturmak istediginiz matrisin sutun sayisini girin : ";
	cin >> matrisSutun;


	for (int i = 0; i < matrisSutun; i++)
	{
		for (int j = 0; j < matrisSatir; j++)
		{
			cout << "A(" << i + 1 << ")(" << j + 1 << ") = ";
			cin >> A[i][j];
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
	cout << endl;
	system("pause");
}
