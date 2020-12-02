// lab_3_2.cpp
// Савшак Арсен
// Лабораторна робота No 3.3
// Розгалуження, задане графіком функції
// Варіант 9

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення вираз
    int num; // змінна для нумерації функцій

    cout << "Please, input 'x' here: "; cin >> x;

    // Розгалуження в повній формі

    if (x<= -7){
        y = 0;
        num = 1;
    }
    else{
       if (-7<x && x<= -3) {
           y = x + 7;
           num = 2;
       }
       else {
           if (-3 < x && x <= -2){
               y = 4;
               num = 3;
           }
           else {
               if (x > -2 && x <= 2){
                   y = pow(x, 2);
                   num = 4;
               }
               else{
                   if(x > 2 && x <= 4){
                       y = 4 - x;
                       num = 5;
                   }
                   else{
                       y = 0;
                       num = 6;
                   }
               }
           }
       }
    }
    cout << "y = " << y << ". Function number: " << num << endl;
}
