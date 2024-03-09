// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double degreNum = value;
    for (uint64_t i = 2; i <= n; i++)
        degreNum *= value;
    return degreNum;
}

uint64_t fact(uint16_t n) {
    uint64_t factNum = 1;
    for (uint64_t i = 2; i <= n; i++)
        factNum *= i;
    return factNum;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double expRes = 1;
    for (uint64_t i = 1; i <= count; i++)
        expRes += calcItem(x, i);
    return expRes;
}

double sinn(double x, uint16_t count) {
    double sinRes = x;
    for (uint64_t i = 2; i <= count; i++)
        sinRes += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
    return sinRes;
}

double cosn(double x, uint16_t count) {
    double cosRes = 1;
    for (uint64_t i = 2; i <= count; i++)
        cosRes += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
    return cosRes;
}
