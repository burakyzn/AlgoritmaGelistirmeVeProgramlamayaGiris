#include <iostream>
#include <string>

using namespace std;

int main()
{
	char cumle[100];
	char harf;
	int yerler[100] , harfSayisi = 0;

	cout << "Cumle Giriniz : ";
	cin.get(cumle, 100);

	cout << "Aranacak Harfi Girin : ";
	cin >> harf;

	for (int i = 0; i < 100; i++)
	{
		if (cumle[i] == harf) {
			harfSayisi++;
			yerler[harfSayisi] = i;
		}
	}

	cout << "Belirtilen harften " << harfSayisi << " tane vardir " << endl ;
	cout << "Yerleri : ";
	
	for (int i = 0; i < harfSayisi; i++)
		cout << yerler[i+1] + 1 << " ";
	cout << endl;

	system("pause");
}
