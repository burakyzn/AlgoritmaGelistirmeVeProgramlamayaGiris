#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int notlar[100], elemanSayisi, siniffOrtalamasi = 0;
	
	cout << "Ogrenci sayisini girin : " ;
	cin >> elemanSayisi;

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << i+1 << ". Ogrencinin Notu : ";
		cin >> notlar[i];
		siniffOrtalamasi += notlar[i];
	}

	siniffOrtalamasi = siniffOrtalamasi / elemanSayisi;

	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << i + 1 << ". Ogrenci ";
		
		if (notlar[i] >= siniffOrtalamasi)
		{
			cout << "GECTI" << endl;
		}
		else
		{
			cout << "KALDI" << endl;
		}
	}
	
	system("pause");
}
