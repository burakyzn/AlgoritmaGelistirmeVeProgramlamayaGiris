#include <iostream>
#include <string>

using namespace std;

int main()
{
	char cumle[100];
	int harfSayisi = 0 , kelimeSayisi = 0;

	cout << "Cumle Giriniz : ";
	cin.get(cumle, 100);

	for (int i = 0; i < 100; i++) 
	{
		if (cumle[i] != '\0') { harfSayisi++; }
		else { break; }
	}

	for (int i = 0; i < harfSayisi; i++)
	{
		if (cumle[i] == ',' || cumle[i] == ' ' || cumle[i] == ':' | cumle[i] == ';')
		{
			kelimeSayisi++;
		}
		else if (cumle[i] == '.' && i != (harfSayisi-1))
		{
			kelimeSayisi++;
		}
	}

	cout << "Girilen cumledeki harf sayisi : " << kelimeSayisi + 1;
	
	cout << endl;
	system("pause");
}
