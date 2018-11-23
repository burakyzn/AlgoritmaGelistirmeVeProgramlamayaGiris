#include <iostream>

using namespace std;

int main()
{
	int A[200];
	int B[200];
	int AelemanSayisi, BelemanSayisi, toplam = 0;

	cout << "A Dizisinin Eleman Sayisini Girin : ";
	cin >> AelemanSayisi;
	cout << "B Dizisinin Eleman Sayisini Girin : ";
	cin >> BelemanSayisi;

	for (int i = 0; i < AelemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
	}

	for (int i = 0; i < AelemanSayisi; i++)
	{
		cout << "B(" << i + 1 << ") = ";
		cin >> B[i];
	}

	for (int i = 0; i < AelemanSayisi; i++)
	{
		toplam += (A[i] * B[i]);
	}

	cout << endl << "Toplam : " << toplam;
	
	system("pause");
}
