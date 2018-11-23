#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sayi = 0;
	string birler[] = {"bir","iki", "uc", "dort", "bes","alti","yedi","sekiz","dokuz" };
	string onlar[] = { "on","yirmi","otuz","kirk","elli","altmis","yetmis","seksen","doksan" };

	cout << "Cift Haneli Sayi Girin : ";
	cin >> sayi;

	if (sayi<0)
		cout << "Girilen Sayi : eksi " << onlar[((-sayi) / 10) - 1] << " " << birler[((-sayi) % 10 ) - 1] << endl;

	cout << "Girilen Sayi : " << onlar[(sayi / 10) - 1] << " " << birler[(sayi % 10) -1] << endl;

	system("pause");
}
