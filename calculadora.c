#include <stdio.h>
#include <math.h>
#include "calculadora.h"
#define SIZE 10;
void leer_arreglo(int arr[]);
  int  sumar_arreglo(int arreglo[]);
  int suma(int a, int b);
  int resta(int a, int b);
  int multi(int a, int b);
  double divi(int a, int b);
  int factorial(int a);
  double euler(int a);
  int factorial_rec(int a);
  void eq_cuadr(double a, double b, double c, double *r1, double *r2);
  void circulo(double radio, double *peri, double *area, double *vol);
  void media(int arr[], double *media, int size, double *mediana, double *moda);
  
int main(void) {
  int a; 
  int b;
  int c;
  double a_d;
  double b_d;
  double c_d;
  int numeros[SIZE];
  int res;
  
  double res1;
  double res2;
  double res3;
  double *peri;
  double *area;
  double *vol;
  char cha; 
  double res_d;
  double *media;
  double *moda;
  double *mediana;
  int size = 10;
  
  printf("que operacion quieres hacer\n");
  scanf("%c", &cha);
  switch(cha) {
  
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
     
     case 'c': { 
          printf("dame un numero\n");
          scanf("%lf", &a_d);
            printf("dame un numero\n");
          scanf("%lf", &b_d);
       printf("dame un numero\n");
          scanf("%lf", &c_d);
          eq_cuadr(a_d, b_d, c_d, &res1, &res2);
     printf("tus resultados son %lf y %lf\n", res1, res2);
     break;
     }
     
     case 'v': {
        printf("dame un numero");
        scanf("%lf", &a_d);
        peri = &res1;
        area = &res2;
        vol = &res3;
        if ( a_d > 0) {
        
           circulo(a_d, &res1,  &res2,  &res3);
           printf("peri:%lf\n area:%lf\n vol: %lf\n", res1, res2, res3);
           
        }
        
            break;
     
     }
     
     case 'm': {
     
      for (i = 0; i < 10; i++) {

        scanf("%d", &numeros[i]);
      }
      
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



void eq_cuadr(double a, double b, double c, double *r1, double *r2) {
*r1 = (-b + sqrt ( b * b - 4 * a * c)) / ( 2 * a);
*r2 = (-b + sqrt ( b * b - 4 * a * c)) / ( 2 * a);

}


void circulo(double radio, double *peri, double *area, double *vol) {

   *area = radio * radio * 3.14;
   *peri = 3.14 * 2 * radio;
   *vol = radio * radio * radio * 1.33 * 3.14; 

}


void media(int numeros[], int size, double *media, double *mediana, double *moda) {
int i;
int j = 1;
    size = strlng(numeros);
    
    for( i = 0; i != '\0' || j != '\0'; i++;) {
        
     *media = numeros[1] + numeros[j];
   

    }
    *media = *media / 11;
    

}
