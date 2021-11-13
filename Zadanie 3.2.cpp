#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int operacja = 1;
	char znak = ' ';

	cout << "Po wcisnieciu klawisza 't' twoj program zakonczy zadanie " << endl ;

	while (operacja) {

		znak = _getch();
		cout << znak;
		if (znak == 't' || znak == 'T')
		{
			break;
		}
	}
}