#pragma once
#include <iostream>

class Power2 {
private:
    int exponent; // Степень числа 2

public:
    // Конструктор по умолчанию и с параметром
    Power2(int exp = 0);

    // Получение значения степени
    int getExponent() const;

    // Перегрузка оператора сравнения ==
    bool operator==(const Power2& other) const;

    // Перегрузка префиксного оператора ++
    Power2& operator++();

    // Перегрузscienceка постфиксного оператора ++
    Power2 operator++(int);

    // Перегрузка унарного оператора !
    bool operator!() const;

    // Дружественная функция для перегрузки оператора вывода
    friend std::ostream& operator<<(std::ostream& out, const Power2& power);
};

#endif // POWER2_H