/*26. Escreva um programa que leia três números inteiros e positivos (A, B, C) e calcule a seguinte
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
int A, B, C;


printf("Escreva A:");
scanf("%d", &A);
getchar();

printf("Escreva B:");
scanf("%d", &B);
getchar();

printf("Escreva C:");
scanf("%d", &C);
getchar();

printf("R:%.2d\n", (A+B)*(A+B));
printf("S:%.2d\n", (B+C)*(B+C));
printf("D:%.2d\n",(((A+B)*(A+B))+((B+C)*(B+C)))/2);


system("PAUSE");

return 0;

}

