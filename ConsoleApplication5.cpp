#include <iostream>
#include <cmath> 
#include "windows.h"

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x = 2.0;

    cout << "���������� ���������:\n";

    do
    {
        double y = pow(cos(x), 2) + log(x) + 2; 
        cout << "X = " << x << "\t";
        cout << "Y = " << y << endl;

        x += 0.1; 
    } while (x <= 3); 

    system("pause");
    return 0;
}