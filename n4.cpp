#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int n, m;
	
	cout<<"Введите кол-во 1)клеток, 2)зайцев:";
	cin>>n>>m;
	
	cout<<"В клетке максимум будет "<<(m+n-1)/n<<" зайцев";
	return 0;
}

