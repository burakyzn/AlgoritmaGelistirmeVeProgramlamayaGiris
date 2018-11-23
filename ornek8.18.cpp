#include <iostream>

using namespace std;

int main()
{
	float A[20][20];
	int matrisSatir, matrisSutun;

	cout << "Lutfen ders sayisini girin :   ";
	cin >> matrisSatir;

	cout << "Sinif mevcutunu girin : ";
	cin >> matrisSutun;

	for (int i = 0; i < matrisSatir; i++)
	{
		for (int j = 0; j < matrisSutun; j++)
		{
			cout << i + 1 << ". dersten " << j + 1 << ". ogrencinin notunu girin : ";
			cin >> A[i][j];
		}
	}

	cout << endl;
	float ortalama;
	float enBuyuk = A[0][0], enKucuk = A[0][0];
	for (int i = 0; i < matrisSatir; i++)
	{
		ortalama = 0;
		for (int j = 0; j < matrisSutun; j++)
		{
			ortalama += A[i][j];

			if (A[i][j] > enBuyuk)
				enBuyuk = A[i][j];

			if (enKucuk > A[i][j])
				enKucuk = A[i][j];
		}
		cout << i + 1 << ". DERS"
			<< "-->" << endl;
		ortalama = ortalama / matrisSutun;
		cout << i + 1 << ". dersin ortalamasi : " << ortalama << endl;
		cout << i + 1 << ". dersten alinan en yuksek not : " << enBuyuk << endl; 
		cout << i + 1 << ". dersten alinan en dusuk not : " << enKucuk << endl;
		cout << endl;
	
		enBuyuk = A[i + 1][0];
		enKucuk = A[i + 1][0];
	}
	
	cout << endl;
	system("pause");
}
