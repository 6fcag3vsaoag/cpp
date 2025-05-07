#include <iostream>
#include "Power2.h"

int main() {
    // Создание объектов
    Power2 p1(3); // 2^3
    Power2 p2(3); // 2^3
    Power2 p3(5); // 2^5

    // Проверка оператора вывода
    std::cout << "p1: " << p1 << std::endl;
    std::cout << "p2: " << p2 << std::endl;
    std::cout << "p3: " << p3 << std::endl;

    // Проверка оператора сравнения
    std::cout << "p1 == p2: " << (p1 == p2 ? "true" : "false") << std::endl;
    std::cout << "p1 == p3: " << (p1 == p3 ? "true" : "false") << std::endl;

    // Проверка префиксного инкремента
    std::cout << "Pre-increment ++p1: " << ++p1 << std::endl;

    // Проверка постфиксного инкремента
    std::cout << "Post-increment p2++: " << p2++ << std::endl;
    std::cout << "After post-increment p2: " << p2 << std::endl;

    // Проверка приоритета операций с инкрементом
    Power2 p4(2);
    std::cout << "p4: " << p4 << std::endl;
    Power2 p5 = ++p4; // Префиксный инкремент
    std::cout << "After ++p4, p5 = " << p5 << ", p4 = " << p4 << std::endl;
    Power2 p6 = p4++; // Постфиксный инкремент
    std::cout << "After p4++, p6 = " << p6 << ", p4 = " << p4 << std::endl;

    // Проверка унарного оператора !
    Power2 p7(0);
    Power2 p8(4);
    std::cout << "!p7 (is exponent 0?): " << (!p7 ? "true" : "false") << std::endl;
    std::cout << "!p8 (is exponent 0?): " << (!p8 ? "true" : "false") << std::endl;

    return 0;
}