#include <stdio.h>

void leer_arreglo(int arr[]);
  int  sumar_arreglo(int arreglo[]);
  int suma(int a, int b);
  int resta(int a, int b);
  int multi(int a, int b);
  double divi(int a, int b);
  int factorial(int a);
  double euler(int a);
  int factorial_rec(int a);
  
int main(void) {
  int a; 
  int b;
  int numeros[10];
  int res;
  char c; 
  double res_d;
  
  printf("que operacion quieres hacer\n");
  scanf("%c", &c);
  switch(c) {
  
  case '+': {
  printf("dame el primer numero\n");
  scanf("%d", &a);
  printf("dame el segunndo numero\n");
  scanf("%d", &b);
  res = suma(a, b);
  printf("%d\n", res);
  break;
  
  }
 
  case '-': {
  
   printf("dame el primer numero\n");
   scanf("%d", &a);
   printf("dame el segunndo numero\n");
   scanf("%d", &b);
   res = resta(a, b);
   printf("%d\n", res);
   break;
   
  }
  
  case '*': {
    printf("dame el primer numero\n");
    scanf("%d", &a);
    printf("dame el segunndo numero\n");
    scanf("%d", &b);
    res = multi(a, b);
     printf("%d\n", res);
     break;
  
  }
  
  case '/': {
     printf("dame el primer numero\n");
     scanf("%d", &a);
     printf("dame el segunndo numero\n");
     scanf("%d", &b);
      res_d = divi(a, b);
     printf("%lf\n", res_d);
     break;
     }
    
     
     case 'f': {
       printf("dame un numero\n");
       scanf("%d", &a);
      res = factorial(a);
      printf("%d\n", res);
      break;
      
     }
     
     case 'F': {
     printf("dame un numero\n");
       scanf("%d", &a);
      res = factorial_rec(a);
      printf("%d\n", res);
      break;
     }
     case 'e': {
      printf("dame un numero\n");
       scanf("%d", &a);
       res_d = euler(a);
       printf("%lf\n", res_d);
      break;
     }
  }
  
  
   //leer_arreglo(numeros);
 //  res = sumar_arreglo(numeros);
   //printf("%d\n", res);
   
   return 0;
}


void leer_arreglo(int arr[]) {
  int i;

  for (i = 0; i < 10; i++) {
    printf(" dame 10 numeros\n");
    scanf("%i", &arr[i]);
  }

 }


int  sumar_arreglo(int arreglo[]) {
  int i ;
  int res = 0; 
  for ( i = 0; i < 10; i++) {
    
    res = res + arreglo[i];
  }
  return res;



}


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

int factorial(int a) {
  int i = 0;
   int res = 1;
   for( i = 1; i <= a; i++) {
   
   res = i * res; 
   
  
  }
    return res;

}

int factorial_rec(int a) {
 int res;
 if(a == 0) {
 return 1;
 }
 else {
  res = factorial_rec(a - 1);
  return a * res;
  }
  }


double euler(int a) {
  double euler_res = 0;
  int i = 0;
  double res_iteracion;
  for(i = 0; i <= a; i++) {
  res_iteracion = factorial(i);
  euler_res = euler_res + 1 / res_iteracion;
  
  } 

   return euler_res;

}

