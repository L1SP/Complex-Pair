#include <iostream>
#include "Pair.h"
#include "Complex.h"
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    Complex* A = new Complex;
    Complex* B = new Complex;
    cout << "Введите первое комплексное число:\n";
    cin >> *A;
    cout << "Введите второе комплексное число:\n";
    cin >> *B;
    int c = -1;
    while (c) {
        cout << "Выберите пункт меню:\n";
        cout << "1. Вывести первое число.\n";
        cout << "2. Вывести второе число.\n";
        cout << "3. Вывести сумму чисел.\n";
        cout << "4. Вывести разность чисел.\n";
        cout << "5. Вывести произведение чисел.\n";
        cout << "6. Вывести частное чисел.\n";
        cout << "0. Завершить работу программы.\n";
        cin >> c;
        switch (c) {
        case 1: cout << "Первое число: " << *A << '\n'; break;
        case 2: cout << "Второе число: " << *B << '\n'; break;
        case 3: {
            Complex tmp = *A + *B;
            cout << "Сумма чисел: " << tmp << '\n'; 
            break;
        }
        case 4: {
            Complex tmp = *A - *B;
            cout << "Разность чисел: " << tmp << '\n'; 
            break;
        }
        case 5: cout << "Произведение чисел: " << *A * *B << '\n'; break;
        case 6: { 
            if (B->getFirst() == 0 && B->getSecond() == 0)
                cout << "Деление на ноль.\n";
            else
                cout << "Частное чисел: " << *A / *B << '\n'; break;
        }
        default: break;
        }
    }
    delete A;
    delete B;
}
