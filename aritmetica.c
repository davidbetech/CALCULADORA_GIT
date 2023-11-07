#include "calculadora.h"
int suma(int a, int b) {

    int res;
    res = a + b;
    return res;

}

int resta(int a, int b) {

    int res;
    res = a - b;
    return res;

}

int multi(int a, int b) {

    int res;
    res = a * b;
    return res;

}

double divi(int a, int b) {
    double a_d;
    double b_d;
    double res;
    a_d = (double) a;
    b_d = (double) b;
    res = a_d / b_d;
    return res;

}
