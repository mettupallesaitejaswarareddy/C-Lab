#include <stdio.h>
int main() { 
  int a;
  float b, c;
  printf("Enter an integer number: ");
    scanf("%d", &a);  
    printf("Enter an floating point number: ");
    scanf("%f", &b);
    c = a + b;
    printf("\nImplicit Type conversation\n");
    printf("addition = %.2f\n", c);
    c = a - b;
    printf("subtraction = %.2f\n", c);
    c = a * b;
    printf("multiplication = %.2f\n", c);
    c = a / b;
    printf("division = %.2f\n", c);
    return 0;
}       