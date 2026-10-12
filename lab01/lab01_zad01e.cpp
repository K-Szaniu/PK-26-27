#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int R;
    cout <<"Podaj promień koła" << endl;
    cin >> R;
    float pi = 3.14;
    float L = 2*pi*R;
    float P = pi*R*R;
    
    
    cout << fixed << setprecision(2);
    cout << "Obwód : " << L << endl << "Pole : " << P << endl;
     return 0;
}