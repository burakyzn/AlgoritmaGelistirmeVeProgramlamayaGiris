#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[200];
	int elemanSayisi = 0;
	int sirali = 1;

	cout << "A Dizisinin Eleman Sayisini Girin : ";
	cin >> elemanSayisi;


	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
	}

	int gecici = 0;
	for (int i = 0; i < elemanSayisi; i++)
	{
		for (int k = 0; k < (elemanSayisi-1-i); k++)
		{
			if (A[k] > A[k + 1])
			{
				sirali = 0;
				gecici = A[k];
				A[k] = A[k + 1];
				A[k + 1] = gecici;
			}

		}
		if (sirali)
		{
			break;
		}
	}

	cout << endl << "Sýralý Dizi : " << endl;
	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = " << A[i] << endl;
	}

	system("pause");
}
