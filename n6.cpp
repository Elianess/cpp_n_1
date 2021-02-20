#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0,"");
	int a;//сторона квадрата
	
	cin>>a;
	cout<<" площадь квадрата: "<<pow(a, 2)<<"\n периметр квадрата: "<< a * 4; 
		
	return 0;
}
