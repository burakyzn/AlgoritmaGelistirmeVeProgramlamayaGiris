#include <iostream>

using namespace std;

int main()
{
	int A[200];
	int B[200];
	int elemanSayisi, k;

	cout << "Dizinin Eleman Sayisini Girin : ";
	cin >> elemanSayisi;
	cout << "Carpilacak Sayiyi Girin : ";
	cin >> k;

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
		B[i] = k * A[i];
	}

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << B[i] << " ";
	}
	
	system("pause");
}
