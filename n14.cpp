#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, d;
	
	cout<<"¬ведите первое число: ";
	cin>>a;
	
	cout<<"¬ведите второе число: ";
	cin>>b;
	
		c=a;
		d=b;
		a=d;
		b=c;
	
	cout<<"„исло a: "<<a<< "\nчисло b: "<<b;
	
	return 0;
}

