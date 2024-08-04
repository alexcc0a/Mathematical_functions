//
//  main.cpp
//  Mathematical_functions
//
//  Created by Александр Нестеров on 8/4/24.
//

#include <iostream>
#include "Mathematical_F.hpp"

int main() {
    double num1, num2;
    char operation;
    std::cout << "Числа, необходимо вводить через пробел\n";
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    
    std::cout << "Выберите операцию (+, -, *, /, ^): ";
    std::cin >> operation;
    
    try {
        double result;
        switch(operation) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            case '^':
                result = power(num1, num2);
                break;
            default:
                std::cout << "Неверная операция" << std::endl;
                return 1;
        }
        
        std::cout << "Результат: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
