#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int A[100] , B[100], C[100], aeleman = 0, beleman = 0, celeman = 0;
	
	cout << "Eleman sayisini girin : " ;
	cin >> aeleman;

	for (int i = 0; i < aeleman; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
	}

	for (int i = 0; i < aeleman; i++)
	{
		if (A[i] > 0)
		{
			B[beleman] = A[i];
			beleman++;
		}
		else
		{
			C[celeman] = A[i];
			celeman++;
		}

	}

	cout << endl << "Pozitif Sayilar : ";
	for (int i = 0; i < beleman; i++) { cout << B[i] << " "; }
	cout << endl << "Negatif Sayilar : ";
	for (int i = 0; i < celeman; i++) { cout << C[i] << " "; }

	system("pause");
}
