#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	int BS[50], KS[50];
	int dogruSayisi = 0, deger = 0;

	for (int i = 0; i < 50; i++)
	{
		BS[i] = (1 + rand() % 50);
 	}

	for (int i = 0; i < 6; i++)
	{
		cout << i + 1 << ". Tahmininiz : ";
		cin >> KS[i];
	}

	for (int i = 0; i < 6; i++)
	{
		for (int k = 0; k < 50; k++)
		{
			if (KS[i] == BS[k])
			{
				dogruSayisi++;
			}
		}
	}

	cout << endl << "Dogru sayiniz : " << dogruSayisi << endl;
	system("pause");
}
