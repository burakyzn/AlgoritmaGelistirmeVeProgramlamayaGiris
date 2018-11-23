#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sayi = 0;
	string birler[] = { "sifir","bir","iki", "uc", "dort", "bes","alti","yedi","sekiz","dokuz" };

	cout << "Tek Haneli Sayi Girin : ";
	cin >> sayi;

	if (sayi < 0) { 
		cout << endl << "Girdiginiz sayi : eksi "; 
		sayi = -sayi;
		cout << birler[sayi] << endl;
	}
	else { cout << endl << "Girdiginiz sayi : " << birler[sayi] << endl; }

	system("pause");
}
