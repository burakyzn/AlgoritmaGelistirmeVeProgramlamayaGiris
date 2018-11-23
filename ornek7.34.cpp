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

	for (int i = 0 ; i < harfSayisi; i++)
	{
		cout << "1";
		for (int k = 0; k < i ;k++)
		{
			cout << "0";
		}
		cout << "'ler Basamagi => " << cumle[harfSayisi - 1 - i] << endl;

	}

	cout << endl;
	system("pause");
}
