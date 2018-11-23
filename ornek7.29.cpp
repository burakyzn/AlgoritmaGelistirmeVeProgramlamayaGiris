#include <iostream>

using namespace std;

int main()
{
	char cumle[50], tersten[50];
	int harfSayisi = 0, dogru = 0;

	cout << "Kelime girin : ";
	cin.get(cumle, 50);

	for (int i = 0; i < 100; i++)
	{
		if (cumle[i] != '\0') { harfSayisi++; }
		else { break; }
	}

	for (int i = 0; i < harfSayisi; i++)
	{
		tersten[harfSayisi - 1 - i] = cumle[i];
	}

	for (int i = 0; i < harfSayisi; i++)
	{
		if (cumle[i] == tersten[i]) {
			dogru++;
		}
	}

	if (dogru == (harfSayisi))
	{
		cout << "Girdiginiz kelime bir polindromiktir." <<endl;
	}
	else {
		cout << "Girdiginiz kelime polindromik degildir." <<endl;
	}

	system("pause");
}
