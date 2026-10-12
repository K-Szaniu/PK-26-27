#include <iostream>

using namespace std;

int main() 
{
    int a;
    int b;
    cout <<"Podaj pierwszą liczbę" << endl;
    cin >> a;
    cout <<"Podaj drugą liczbę" << endl;
    cin >> b;
    int iloczyn = a*b;
    int suma = a+b;
    int różnica = a-b;
    
    
    cout << "Suma: " << suma << endl << "Różnica: " << różnica << endl << "Iloczyn: " << iloczyn << endl;
     return 0;
}