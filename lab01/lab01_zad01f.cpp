#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    float P;
    int T;
    float R;
    cout <<"Podaj kwotę: " << endl;
    cin >> P;
    cout <<"Podaj okres kredytowania: " << endl;
    cin >> T;
    cout <<"Podaj stopę procentową: " << endl;
    cin >> R;
    int jeden = (P * T * R )/100;
    float dwa = (P * T * R )/100;
    
    
    cout << fixed << setprecision(2);
    cout << "P = " << P << endl << "T = " << T << endl << "R = " << R << endl << "Wynik rzeczywisty: " << dwa << endl << "Wynik całkowity: " << jeden << endl;
     return 0;
}