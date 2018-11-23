#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int xler[100], yler[100], noktasayisi;
	int bolge1 = 0, bolge2 = 0, bolge3 = 0, bolge4 = 0;

	cout << "Aranacak nokta sayisini girin : ";
	cin >> noktasayisi;

	for (int i = 0; i < noktasayisi; i++)
	{
		cout << i+1 << ". Noktanin X kordinatini Girin : ";
		cin >> xler[i];
		cout << i+1 << ". Noktanin Y kordinatini Girin : ";
		cin >> yler[i];
	}

	for (int i = 0; i < noktasayisi; i++)
	{
		if (xler[i] > 0 && yler[i] > 0)
			bolge1++;
		if (xler[i] < 0 && yler[i] > 0)
			bolge2++;
		if (xler[i] < 0 && yler[i] < 0)
			bolge3++;
		if (xler[i] > 0 && yler[i] < 0)
			bolge4++;
	}

	cout << endl << "1. bolgedekilerin sayisi : " << bolge1 << endl;
	cout << "2. bolgedekilerin sayisi : " << bolge2 << endl;
	cout << "3. bolgedekilerin sayisi : " << bolge3 << endl;
	cout << "4. bolgedekilerin sayisi : " << bolge4 << endl;

	system("pause");
}
