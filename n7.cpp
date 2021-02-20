#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0,"");
	float a, b;
	
	cout<<"Введите катеты треугольника: ";
	cin>>a>>b;
	cout<<"Гипотенуза: "<< sqrt(pow(a, 2) + pow(b, 2));
	
	return 0;
}
