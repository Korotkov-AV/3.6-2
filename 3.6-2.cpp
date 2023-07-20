// 3.6-2.cpp (3.3-2.cpp переработанное) 


//#include <iostream>
//#include <string>
//#include <Windows.h>
#include "func.h"




int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    std::wstring da_net;
    std::string string_variable;
    int int_x = 1;

    std::cout << "Вы хотите указать начальное значение счётчика ? Введите да или нет : ";
    std::wcin >> da_net;
    // std::getline(std::wcin, da_net);
    if (da_net == L"да")
    {
        std::cout << "Введите начальное значение счётчика : ";
        std::cin >> int_x;
    }

    Counter c(int_x); // {3};



    while (true)
    {
        std::cout << " Введите команду('+', '-', '=' или 'x') : ";
        std::cin >> string_variable;

        if (string_variable == "+") {
            //std::cout << "One" << std::endl;
            c.add();

        }
        else if (string_variable == "-") {
            //std::cout << "Two" << std::endl;
            c.subtract();

        }
        else if (string_variable == "=") {
            //std::cout << "Three" << std::endl;
            c.print();

        }
        else {
            // std::cout << "Unknown" << std::endl;
            break;
        }
        // std::cout << "кон if" << std::endl;
    }



    std::cout << "\n\n До свидания!\n";
}








#if 0

Вы хотите указать начальное значение счётчика ? Введите да или нет : да
Введите начальное значение счётчика : 6
Введите команду('+', '-', '=' или 'x') : +
Введите команду('+', '-', '=' или 'x') : +
Введите команду('+', '-', '=' или 'x') : =
8
Введите команду('+', '-', '=' или 'x') : -
Введите команду('+', '-', '=' или 'x') : =
7
Введите команду('+', '-', '=' или 'x') : x
До свидания!

public:
    int get_num1() { return num1; }
    void set_num1(int value) {
        if (value != 0)
            num1 = value;
    }

#endif


