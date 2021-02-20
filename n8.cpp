#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int n, k, a, b;
	
	cin>>n>>k;
	a = k /n;//каждому школьнику а €блок
	b = k - (a * n);//осталось €блок в корзине
	cout<<a<<"\n"<<b;
	
	return 0;
}
