#include <iostream>
using namespace std;
int main()
{
	setlocale(0,"");
	int n, k, a, b;
	
	cin>>n>>k;
	a = k /n;//������� ��������� � �����
	b = k - (a * n);//�������� ����� � �������
	cout<<a<<"\n"<<b;
	
	return 0;
}
