#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
 
	int cups = 6;
	int spoons = cups; // количество ложек равно кол-тву чашек
	int saucers = cups; // блюдца 
	int amount = cups + spoons + saucers; // общее количество
 
	cout<<"Всего "<<amount;
 
	return 0;
}
