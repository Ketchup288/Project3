// lab_3_1.cpp
// Савшак Арсен
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x; // вхідна змінна
    double y; // змінна, яка позначає результат обчислення виразу
    double A; // тимчасова змінна результату виразу
    double B; // тимчасова змінна результату виразів

    cout << "Please, input 'x' here: "; cin >> x;
    A = 2 * pow(abs(x), 3);
    // спосіб 1, розгалуження в неповній формі
    if (x<=-0.1){
        B = 5*cos(18*x);
    }
    if (x >-0,1 && x < 1.2){
        B = atan((x+2)/5);
    }
    if (x >=1.2 ){
        double Pi = 4 * atan(1.0);
        B = tan(Pi/2 - (x+18));
    }
    y = A - B;
    cout << "1) y = '" << y << "'" << endl;

    // спосіб 2, розгалуження в повній формі
    if (x<=-0.1)
    {
        B = 5*cos(18*x);
    }
    else
    {
        if (x >=1.2 )
        {
            double Pi = 4 * atan(1.0);
            B = tan(Pi/2 - (x+18));
        }
        else
        {
            B = atan((x+2)/5);
        }
    }
    y = A - B;
    cout << "2) y = '" << y << "'" << endl;
}
