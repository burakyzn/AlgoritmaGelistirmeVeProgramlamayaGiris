#include <iostream>
#include <string>

using namespace std;

int main()
{
	char cumle[100], sesliHarfler[] = { 'a', 'e', 'ý', 'i', 'o', 'ö', 'u', 'ü' };
	int harfSayisi = 0, sesliHarfSayisi = 0;
	int sesliHarfYeri[100];

	cout << "Cumle Giriniz : ";
	cin.get(cumle, 100);

	for (int i = 0; i < 100; i++) 
	{
		if (cumle[i] != '\0') { harfSayisi++; }
		else { break; }
	}

	for (int i = 0; i < harfSayisi; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			if (cumle[i] == sesliHarfler[k])
			{
				sesliHarfYeri[sesliHarfSayisi] = i;
				sesliHarfSayisi++;
				break;
			}
		}
	}

	cout << "Cumlede " << sesliHarfSayisi << " tane sesli harf var." << endl
		<< "Yerleri : ";

	for (int i = 0; i < sesliHarfSayisi; i++)
		cout << sesliHarfYeri[i] + 1 << " ";
	
	cout << endl;
	system("pause");
}
