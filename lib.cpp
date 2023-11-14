#include "lib.h"
#include <cmath>

int MathOperations::findMin(int x, int y) {
    return (x < y) ? x : y;
}

int MathOperations::findMax(int x, int y) {
    return (x > y) ? x : y;
}

int MathOperations::square(int x) {
    return x * x;
}

double MathOperations::power(int x, int n) {
    return std::pow(x, n);
}

bool MathOperations::isEven(int x) {
    return (x % 2 == 0);
}

bool MathOperations::isOdd(int x) {
    return (x % 2 != 0);
}

