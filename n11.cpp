#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    float a, b, c, x;
    setlocale(0,"");
    
    cout<< "Введите a, b и с: ";
    cin>>a>>b>>c;

    if((pow(b,2)-4*a*c)>=0)
    {
        x=(-1*b+sqrt(pow(b,2) - 4*a*c))/(2*a);
        cout << "Первый корень равен " << x<<"\n";
        x=(-1*b-sqrt(pow(b,2) - 4*a*c))/(2*a);
        cout<<"Второй корень равен "<<x;
    }
    
    else
    {
        cout<<"Дискриминант меньше 0";
    }
 
    return 0;
}
