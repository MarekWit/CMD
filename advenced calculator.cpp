#include <iostream>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int addition(int num1, int num2)
{
    int result;
    result=num1 + num2;
    return result;
}
int subtraction(int num1, int num2)
{
    int result;
    result = num1 - num2;
    return result;
}
int multiplication(int num1, int num2)
{
    int result;
    result = num1 * num2;
    return result;
}
int division(int num1, int num2)
{
    int result;
    result = num1 / num2;
    return result;
}
int fib(int num1)
{
    if (num1 == 0)
        return 0;
    else if (num1 == 1)
        return 1;
    else
        return(fib(num1 - 1) + fib(num1 - 2));
}
int silnia(int s)
{
   
    if (s < 2)return s;
    return s * silnia(s - 1);
}
void menu()
{
    std::cout << "***CALCULATOR***\n";
    std::cout << "Choose option: \n";
    std::cout << "\t1.Addiction\n";
    std::cout << "\t2.Subtraction\n";
    std::cout << "\t3.Multiplication\n";
    std::cout << "\t4.division\n";
    std::cout << "\t5.Fibbonaci\n";
    std::cout << "\t6.silnia\n";
    std::cout << "\t7.Quit\n";
}

int main()
{
    int p_num1, p_num2;
    char choose;
    while (true)
    {
        menu();
        std::cout << "\n";
        choose = _getch();
        switch (choose)
        {
        case '1':
            std::cout << "Enter Number 1: ";
            std::cin >> p_num1;
            std::cout << "Enter Number 2: ";
            std::cin >> p_num2;
            std::cout << addition(p_num1, p_num2)<<"\n\n";
            break;
        case '2':
            std::cout << "Enter Number 1: ";
            std::cin >> p_num1;
            std::cout << "Enter Number 2: ";
            std::cin >> p_num2;
            std::cout << subtraction(p_num1, p_num2) << "\n\n";
            break;
        case '3':
            std::cout << "Enter Number 1: ";
            std::cin >> p_num1;
            std::cout << "Enter Number 2: ";
            std::cin >> p_num2;
            std::cout << multiplication(p_num1, p_num2) << "\n\n";
            break;
        case '4':
            std::cout << "Enter Number 1: ";
            std::cin >> p_num1;
            std::cout << "Enter Number 2: ";
            std::cin >> p_num2;
            if (p_num2 == 0)
            {
                std::cout << "Invalid value!! Try Again";
                break;
            }
            else
            std::cout << division(p_num1, p_num2) << "\n\n";
            break;
        case '5':
            int fibnum, i;
            std::cout << "Enter Fibonacci number of elements: ";
            std::cin >> p_num1;
            fibnum = 0;
            for (i = 1; i <= p_num1; i++)
            {
                std::cout << " " << fib(fibnum); 
                fibnum++;
            }
            break;
        case '6':
            int s;
            std::cout << "Number: ";
            std::cin >> s;
            std::cout << silnia(s) << "\n";
            break;
        case '7':
            std::cout << "System shutdown\n";
            std::cout << "3\n";
            Sleep(1000);
            std::cout << "2\n";
            Sleep(1000);
            std::cout << "1\n";
            Sleep(1000);
            exit(0);
            break;
        }
        Sleep(2000);
        system("cls");
    }

    return 0;
}

