#include <iostream>
#include <string>

using namespace std;

int main()
{
	char cumle[100], degisecekHarf, yeniHarf;
	int harfSayisi = 0;

	cout << "Cumle Giriniz : ";
	cin.get(cumle, 100);

	cout << "Degistirilmek istenen harfi girin : ";
	cin >> degisecekHarf;

	cout << "Yeni harfi girin : ";
	cin >> yeniHarf;

	for (int i = 0; i < 100; i++) 
	{
		if (cumle[i] != '\0') { harfSayisi++; }
		else { break; }
	}
	
	for (int i = 0; i < harfSayisi; i++)
	{
		if (cumle[i] == degisecekHarf)
		{
			cumle[i] = yeniHarf;
		}
	}

	for (int i = 0; i < harfSayisi; i++)
	{
		cout << "Cumlenin yeni hali : " << cumle[i];
	}

	cout << endl;
	system("pause");
}
