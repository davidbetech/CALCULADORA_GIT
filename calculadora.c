#include <stdio.h>
#include <math.h>
#include "calculadora.h"
#define SIZE 10

typedef struct {
    char operacion;
    double resultado_double1;
    double resultado_double2;
    double resultado_double3;
    int resultado_int;
    int op1;
    int op2;
    int op3;
    double op1d;
    double op2d;
    double op3d;
} OPERACION;


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
  void mmm(int arr[], int size, double *media, double *mediana, double *moda);
  
  
int main(void) {
  int a; 
  int b;
  int c;
  double a_d;
  double b_d;
  double c_d;
  int numeros[SIZE];
  int res;
  OPERACION historial[10];
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
  int size = 11;
  int contador = 0;
  int i;
  while(1) {
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
  historial[contador].op1 = a;
   historial[contador].op2 = b;
  historial[contador].resultado_int = res;
  
  break;
  
  }
 
  case '-': {
  
   printf("dame el primer numero\n");
   scanf("%d", &a);
   printf("dame el segunndo numero\n");
   scanf("%d", &b);
   res = resta(a, b);
   printf("%d\n", res);

   historial[contador].op1 = a;
   historial[contador].op2 = b;
   historial[contador].resultado_int = res;
  
   break;
   
  }
  
  case '*': {
  
    printf("dame el primer numero\n");
    scanf("%d", &a);
    printf("dame el segunndo numero\n");
    scanf("%d", &b);
    res = multi(a, b);
    printf("%d\n", res);
    
    historial[contador].op1 = a;
    historial[contador].op2 = b;
    historial[contador].resultado_int = res;
  
     break;
  
  }
  
  case '/': {
  
     printf("dame el primer numero\n");
     scanf("%d", &a);
     printf("dame el segunndo numero\n");
     scanf("%d", &b);
     res_d = divi(a, b);
     printf("%lf\n", res_d);

     historial[contador].op1 = a;
     historial[contador].op2 = b;
     historial[contador].resultado_int = res;
  
     break;
     }
    
     
     case 'f': {
     
         printf("dame un numero\n");
         scanf("%d", &a);
         res = factorial(a);
         printf("%d\n", res);
       
         historial[contador].op1 = a;
         historial[contador].resultado_int = res;
  
      break;
      
     }
     
     case 'F': {
     
         printf("dame un numero\n");
         scanf("%d", &a);
         res = factorial_rec(a);
         printf("%d\n", res);
     
         historial[contador].op1 = a;
         historial[contador].resultado_int = res;
      break;
     }
     case 'e': {
     
         printf("dame un numero\n");
         scanf("%d", &a);
         res_d = euler(a);
         printf("%lf\n", res_d);
         historial[contador].op1 = a;
         historial[contador].resultado_double1 = res_d;
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
      
         historial[contador].op1d = a_d;
         historial[contador].op2d = b_d;
         historial[contador].op3d = c_d;
         historial[contador].resultado_double1 = res1;
         historial[contador].resultado_double2 = res2;
     
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
        
         historial[contador].op1d = a_d;
         historial[contador].resultado_double1 = res1;
         historial[contador].resultado_double2 = res2; 
         historial[contador].resultado_double3 = res3; 
         
            break;
     
     }
     
     case 'm': {
     
     
     
      for (i = 0; i < 10; i++) {

        scanf("%d", &numeros[i]);
      }
      media = &res1;
      moda = &res2;
      mediana = &res3;
      mmm(numeros, size, &res1, &res2, &res3);
      
         break;    
     }
     
  }
  
     historial[contador].operacion = cha;
     
     if (contador == 10){
     
     contador -= 10;
     
     }

     for(i = 0; i <= contador; i++) {
     printf("operacion %d;\n tipo: %c\n operandos: %d %d %d \n resultado int: %d\n resultados floats: %lf, %lf, %lf\n", i + 1, historial[i].operacion, historial[i].op1, historial[i].op2,          
     historial[i].op3, historial[i].resultado_int, historial[i].resultado_double1, historial[i].resultado_double2, historial[i].resultado_double3);
     }
     getchar();
     contador++;
  
  }
  
  
  
   //leer_arreglo(numeros);
   // res = sumar_arreglo(numeros);
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


void mmm(int numeros[], int size, double *media, double *mediana, double *moda) {
int i;
int j = 1;

    
    for( i = 0; i != '\0' || j != '\0'; i++) {
        
     *media = numeros[1] + numeros[j];
   

    }
    *media = *media / size;
    
    

}
