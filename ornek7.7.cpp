#include <iostream>

using namespace std;

int main()
{
	int A[200];
	int B[200];
	int elemanSayisi;

	cout << "Dizinin Eleman Sayisini Girin : ";
	cin >> elemanSayisi;

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << "A(" << i + 1 << ") = ";
		cin >> A[i];
		B[elemanSayisi-1-i] = A[i];
	}

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << B[i] << " ";
	}
	
	system("pause");
}
