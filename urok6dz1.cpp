// Введите первое число: 20
//Введите второе число : 2
//Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : 5
//20 в степени 2 = 400
//

#include <iostream>
#include <windows.h>
#include "Mathfunct.h"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 0;
    int b = 0;
    int type = 0;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
    std::cin >> type;

    switch (type) {
    case 1:
        std::cout << a << " + " << b << " = " << slogenie(a,b) << std::endl;        
        break;
    case 2:
        std::cout << a << " - " << b << " = " << vichetanie(a, b) << std::endl;
        break;
    case 3:
        std::cout << a << " * " << b << " = " << umnogenie(a, b) << std::endl;
        break;
    case 4:
        if (b != 0) {
            std::cout << a << " / " << b << " = " << delenie(a, b) << std::endl;
        }
        else {
            std::cout << " на 0 делить нельзя " << std::endl;
        }
        break;
    case 5:
        std::cout << a << " в степени " << b << " = " << stepen(a, b) << std::endl;
        break;
    default:
        std::cout << " выбрали не существующую операцию " << std::endl;
        break;

    }
}

