#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A[200];
	float AelemanSayisi, aritmetiko;
	float aritmetikgecici = 0;
	float geometrikgecici = 1, geometriko = 0, harmoniko = 0, harmonikgecici = 0;

	cout << "A Dizisinin Eleman Sayisini Girin : ";
	cin >> AelemanSayisi;
	

	for (int i = 0; i < AelemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
	}

	for (int i = 0; i < AelemanSayisi; i++)
	{
		aritmetikgecici += A[i];
		geometrikgecici = geometrikgecici * A[i];
		harmonikgecici += (1 / A[i]);
	}

	aritmetiko = aritmetikgecici / AelemanSayisi;
	geometriko = pow(geometrikgecici, (1.0 / AelemanSayisi));
	harmoniko = AelemanSayisi / harmonikgecici;

	cout << "Aritmetik Ortalamasi : " << aritmetiko << endl;
	cout << "Geometrik Ortalamasi : " << geometriko << endl;
	cout << "Harmonik Ortalamasi : " << harmoniko << endl;
	
	system("pause");
}
