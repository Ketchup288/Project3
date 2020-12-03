// lab_3_4.cpp
// Савшак Арсен
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою
// Варіант 9


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x; // вхідний параметр
    double y; // вхідний параметр
    double R; // вхідний параметр

    cout << "Please, input 'x' here: "; cin >> x;
    cout << "Please, input 'y' here: "; cin >> y;
    cout << "Please, input 'R' here: "; cin >> R;

    if (R <= 0){
        cout << "'R' must be more than 0. Please, try again." << endl;// R - це радіус, тому він повинен бути більше 0,
        return 0;  // якщо меньше, то функція завершується з повідомленням про помилку.
    }

    if (x>=0 && R > 0 && y > 0 && y <=R && y <= pow((x-1), 2) ||
        x <= 0 && y <= 0 && x >= -R && y >= -R){
        cout << "True" << endl;
}
    else{
        cout << "False" << endl;
    }

}
