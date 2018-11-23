#include <iostream>
#include <string>

using namespace std;

int main()
{
	char cumle[100];
	int harfSayisi = 0;

	cout << "Cumle Giriniz : ";
	cin.get(cumle, 100);

	for (int i = 0; i < 100; i++) 
	{
		if (cumle[i] != '\0') { harfSayisi++; }
		else { break; }
	}

	for (int i = harfSayisi; i >= 0; i--)
	{
		cout << cumle[i] << " ";
	}

	system("pause");
}
