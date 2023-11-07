#include "calculadora.h"
double euler(int a) {
  double euler_res = 0;
  int i = 0;
  double res_iteracion;
  for(i = 0; i <= a; i++) {
  res_iteracion = factorial(i);
  euler_res = euler_res + 1 / res_iteracion;
  
  } 
  }
