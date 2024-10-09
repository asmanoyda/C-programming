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
  int length = 10, width = 20, area;
  area = length * width;
  printf("area of rectangle is = %d", area);
}
// program to find area of circle
void circle() {
  float area, pi = 3.14;
  int radius = 5;
  area = radius * radius * pi;
  printf("area of circle is = %f", area);
}
// input and output function
void input_output() {
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  printf("The number is = %d", a);
}
// program to find average of two numbers
void average() {
  int a, b;
  float avg;
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);
  avg = (a + b) / 2;
  printf("average of two numbers is = %f", avg);
}
// relational operator
void relational() {
  int a, b;
  printf("Enter first number : ");
  scanf("%d", &a);
  printf("Enter second number : ");
  scanf("%d", &b);
  printf("a>b = %d\n", a > b);
  printf("a<b = %d\n", a < b);
  printf("a>=b = %d\n", a >= b);
  printf("a<=b = %d\n", a <= b);
  printf("a==b = %d\n", a == b);
  printf("a!=b = %d\n", a != b);
}
// logical operators
void logical() {
  int a, b;
  printf("Enter first number : ");
  scanf("%d", &a);
  printf("Enter second number : ");
  scanf("%d", &b);
  printf("a>b && a<b = %d\n", a > b && a < b); // and
  printf("a>b || a<b = %d\n", a > b || a < b); // or
  printf("!(a>b) = %d\n",!(a>b); //not
}
// demonstrat working of functions
int function() {
  show();
  return 0;
}
show() { printf("Hello World "); }
// scope rules

int a = 10; // Global variable
void scope() { sum(); }
add() {
  int x, y, sum; // local variable
  x = 10;
  y = 20;
  sum = x + y;
  printf("sum = %d", sum);
}
int main() {
  printf("Hello World\n");
  printf("C language learning\n");
  // variables();
  // rectangle();
  // arithmetic();
  // circle();
  // input_output();
  // average();
  // relational();
  // logical();
  // function();
  scope();
  return 0;
}
