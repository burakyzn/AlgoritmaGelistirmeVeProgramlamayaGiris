#include <iostream>

using namespace std;

int main()
{
	char cumle[50], tersten[50];
	int harfSayisi = 0, dogru = 0;

	cout << "Cumle girin : ";
	cin.get(cumle, 50);

	for (int i = 0; i < 100; i++)
	{
		if (cumle[i] != '\0') { harfSayisi++; }
		else { break; }
	}

	if (harfSayisi % 2 != 0)
	{
		cumle[harfSayisi] = ' ';
		harfSayisi++;
	}

	char gecici;
	for (int i = 0; i < harfSayisi-1; i += 2)
	{
		gecici = cumle[i];
		cumle[i] = cumle[i+ 1];
		cumle[i + 1] = gecici;
	}

	cout << endl << "Sifrelenmis cumleniz : ";

	for (int i = 0; i < harfSayisi; i++)
	{
		cout << cumle[i] ;
	}

	cout << endl;
	system("pause");
}
