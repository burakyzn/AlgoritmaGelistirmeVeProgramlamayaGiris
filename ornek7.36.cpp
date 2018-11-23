#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int donusecekSayi, taban, sonuc[100], sonucindis =0, basamak, toplam = 0;

	cout << "2-9 Arasi taban olmak uzere 10 tabanina donusturulmesini istediginiz bir sayi girin : ";
	cin >> donusecekSayi;

	cout << "Girilen sayi hangi tabanda yazilmistir ?  ";
	cin >> taban;
	
	while (donusecekSayi != 0)
	{
		basamak = donusecekSayi % 10;
		sonuc[sonucindis] = basamak;
		donusecekSayi = donusecekSayi / 10;
		sonucindis++;
	
	}

	for (int i = 0; i < sonucindis; i++)
	{
		toplam += sonuc[i] * (pow(taban, i));
	}

	cout << "Girdiginiz sayinin 10 tabaninda yazilmis hali => " << toplam;

	cout << endl;
	system("pause");
}
