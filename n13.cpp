#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
 
	int cups = 6;
	int spoons = cups; // ���������� ����� ����� ���-��� �����
	int saucers = cups; // ������ 
	int amount = cups + spoons + saucers; // ����� ����������
 
	cout<<"����� "<<amount;
 
	return 0;
}
