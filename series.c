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
