#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int sum, deduc, multipl;
	float mean, a, b;
	
	cout<<"введите 2 числа: ";
	cin>>a>>b;
	
	cout<<" sum: "<<a+b<<"\n deduc: "<<a-b<<"\n multipl: "<<a*b<<"\n mean: "<<(a+b)/2; 
	
	return 0;
}
