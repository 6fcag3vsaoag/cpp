// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "");

    double s, x, y, z;

    x = 0.1722;
    y = 6.33;
    z = 3.25e-4;
    

    /*
    cout << "Введите переменную x:\n  ";
    cin >> x;
    cout << "Введите переменную y:\n  ";
    cin >> y;
    cout << "Введите переменную z:\n  ";
    cin >> z;
    */


    s = 5 * atan(x) - 0.25 * acos(x) * (x + 3 * abs(x - y) + pow(x, 2) )/ (abs(x - y) * z + pow(x, 2));
    
    
    cout << "S Равно:  " << s;
}


