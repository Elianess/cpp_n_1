#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b;
	
	cout<<"¬ведите первое число: ";
	cin>>a;
	
	cout<<"¬ведите второе число: ";
	cin>>b;
	
		a=a+b;
		b=a-b;
		a=a-b;
	
	cout<<"„исло a: "<<a<< "\nчисло b: "<<b;
	
	return 0;
}

