
#include <stdio.h>
#include <stdlib>
#include <math.h>

int main ()

{ 
  float sal;
  float vlqw;
  float vlrs;
  float qw;
  
  printf ("Insira o valor do salario minimo:");
  scanf ("%f", &sal);
  getchar();
  printf("Insira a quantidade de energia consumida, em quilowatts:");
  scanf("%f", &qw);
  
  vlqw=sal/700;
  vlrs=qw*vlqw;
  
  printf ("Valor de cada quilowatt: %.2f \n", vlqw); 
  printf("O valor total a ser pago: %.2f \n", vlrs );
  printf("O valor com desconto: %.2f \n", vlrs-(0.1*vlrs)); 
  
  system ("PAUSE");
  return 0;
}
