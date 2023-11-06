#include "CalcValue.h"

template <typename T>
Calc<T>::Calc(T valA, T valB) : numA(valA), numB(valB) {};

template <typename T>
T Calc<T>::Min() {
    if (numA < numB) {
        return numA;
    }
    else {
        return numB;
    }
}