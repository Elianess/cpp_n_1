#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(0,"");
	int x;
	
	cin>>x;
	cout<<"fx=x^2 + 3x - 100 равно\t"<< pow(x, 2) + (3*x) - 100;
	
	return 0;
}
