#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int n, m;
	
	cout<<"������� ���-�� 1)������, 2)������:";
	cin>>n>>m;
	
	cout<<"� ������ �������� ����� "<<(m+n-1)/n<<" ������";
	return 0;
}

