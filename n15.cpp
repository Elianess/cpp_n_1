#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b;
	
	cout<<"������� ������ �����: ";
	cin>>a;
	
	cout<<"������� ������ �����: ";
	cin>>b;
	
		a=a+b;
		b=a-b;
		a=a-b;
	
	cout<<"����� a: "<<a<< "\n����� b: "<<b;
	
	return 0;
}

