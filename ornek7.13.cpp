#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	int icerde = 0, ustunde = 0, disarda = 0, xler[100], yler[100], yaricap, x ,y , noktasayisi;
	float sonuc;

	cout << "Cemberin X kordinatini girin : ";
	cin >> x;
	cout << "Cemberin Y kordinatini girin : ";
	cin >> y;
	cout << "Cemberin yaricapini girin : ";
	cin >> yaricap;
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
		sonuc = (xler[i] - x)*(xler[i] - x) + (yler[i] - y)*(yler[i] - y);
		
		if (sonuc > (yaricap*yaricap))
			disarda++;
		if (sonuc == (yaricap*yaricap))
			ustunde++;
		if (sonuc < (yaricap*yaricap))
			icerde++;
	}

	cout << "Cemberin =>" << endl;
	cout << "Icindekilerin sayisi : " << icerde << endl;
	cout << "Ustundekilerin sayisi : " << ustunde << endl;
	cout << "Disaridakilerin sayisi : " << disarda << endl;

	system("pause");
}
