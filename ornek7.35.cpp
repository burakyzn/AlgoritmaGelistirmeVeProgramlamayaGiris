#include <iostream>

using namespace std;

int main()
{
	int bolunecekSayi, taban, kalanSayi, sonuc[100], sonucindis =0;

	cout << "Pozitif bir tam sayi giriniz : ";
	cin >> bolunecekSayi;

	cout << "Hangi tabanda yazilsin? ";
	cin >> taban;
	
	while (1)
	{
		kalanSayi = bolunecekSayi % taban;
		bolunecekSayi = bolunecekSayi / taban;
		sonuc[sonucindis] = kalanSayi;
		sonucindis++;

		if (bolunecekSayi < taban - 1)
			break;
	}

	cout << "Girilen sayinin " << taban << "'ninda yazilmis hali => ";
	for (int i = 0; i < sonucindis; i++)
	{
		cout << sonuc[sonucindis -1 - i] << " ";
	}
	cout << endl;
	system("pause");
}
