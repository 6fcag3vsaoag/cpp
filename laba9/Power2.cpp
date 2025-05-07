#include "Power2.h"

// Конструктор
Power2::Power2(int exp) : exponent(exp) {}

// Получение значения степени
int Power2::getExponent() const {
    return exponent;
}

// Перегрузка оператора ==
bool Power2::operator==(const Power2& other) const {
    return exponent == other.exponent;
}

// Перегрузка префиксного ++
Power2& Power2::operator++() {
    ++exponent;
    return *this;
}

// Перегрузка постфиксного ++
Power2 Power2::operator++(int) {
    Power2 temp = *this;
    ++exponent;
    return temp;
}

// Перегрузка унарного оператора !
bool Power2::operator!() const {
    return exponent == 0;
}

// Перегрузка оператора вывода
std::ostream& operator<<(std::ostream& out, const Power2& power) {
    out << "2^" << power.exponent << " = " << (1LL << power.exponent);
    return out;
}