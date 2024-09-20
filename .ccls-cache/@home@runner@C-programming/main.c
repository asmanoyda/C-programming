#include <stdio.h>
void variables() {
  int a = 10;
  float b = 3.14;
  char c = 'A';
  printf("value of integer is  = %d\n", a);
  printf("value of float is = %f\n", b);
  printf("value of charcter is = %c\n", c);
}
void arithmetic() {
  int a = 100, b = 200, c = 300;
  printf("sum of a and b is = %d\n", a + b);
  printf("subtraction of c and b is = %d\n", c - b);
  printf("multiplication of a and b is = %d\n", a * b);
  printf("division of c and a is = %d\n", c / a);
}
// program to find area of rectangle 
void rectangle() {
 int length =10 , width =20, area;
  area = length* width;
  printf("area of rectangle is = %d",area);
  
  
}


int main() {
  printf("Hello World\n");
  printf("C language learning\n");
  // variables();
  rectangle();
  //arithmetic();
  return 0;
}
