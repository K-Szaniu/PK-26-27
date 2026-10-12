#include <iostream>

using namespace std;

int main() 
{
    int a;
    int b;
    int c;
    cout <<"Podaj pierwszy wymiar" << endl;
    cin >> a;
    cout <<"Podaj drugi wymiar" << endl;
    cin >> b;
    cout <<"Podaj trzeci wymiar" << endl;
    cin >> c;
    int Pole = 2*a*b+2*a*c+2*b*c;
    int Objętość = a*b*c;
    
    
    cout << "Pole: " << Pole << endl << "Objętość: " << Objętość << endl;
     return 0;
}