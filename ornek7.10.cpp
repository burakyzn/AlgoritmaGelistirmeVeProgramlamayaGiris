#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[200];
	int elemanSayisi = 0;
	int enBuyuk, enBuyukYer, enKucuk, enKucukYer;

	cout << "A Dizisinin Eleman Sayisini Girin : ";
	cin >> elemanSayisi;


	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
	}

	enBuyuk = A[0];
	enBuyukYer = 0;
	for (int i = 0; i < elemanSayisi; i++)
	{
		if (A[i] > enBuyuk)
		{
			enBuyuk = A[i];
			enBuyukYer = i + 1;
		}
	}

	enKucuk = A[0];
	enKucukYer = 0;
	for (int i = 0; i < elemanSayisi; i++)
	{
		if (A[i] < enKucuk)
		{
			enKucuk = A[i];
			enKucukYer = i + 1;
		}
	}

	cout << "Dizinin En Buyuk Elemani : " << enBuyuk << " Bulundugu Indis : " << enBuyukYer << endl;
	cout << "Dizinin En Kucuk Elemani : " << enKucuk << " Bulundugu Indis : " << enKucukYer << endl;


	system("pause");
}
