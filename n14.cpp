#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c, d;
	
	cout<<"������� ������ �����: ";
	cin>>a;
	
	cout<<"������� ������ �����: ";
	cin>>b;
	
		c=a;
		d=b;
		a=d;
		b=c;
	
	cout<<"����� a: "<<a<< "\n����� b: "<<b;
	
	return 0;
}

