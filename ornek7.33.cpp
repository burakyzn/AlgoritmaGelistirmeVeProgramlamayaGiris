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

	for (int i = 0; i < harfSayisi; i++)
	{
		cumle[i] = char(int(cumle[i]) - 33);
	}

	cout << endl << "Sifresi cozulmus cumleniz : ";

	for (int i = 0; i < harfSayisi; i++)
	{
		cout << cumle[i] ;
	}

	cout << endl;
	system("pause");
}
