//lab10ex02 Torre de Hanoi

#include <stdlib.h>
#include <stdio.h>

void hanoi(int, int, int, int);


int main(){
   int n, p1=1, p2=2, p3=3;
   printf("Digite a quantidade de discos: ");
   scanf("%d",&n);
   hanoi(n, p1, p2, p3);
   printf("\n\n");
   hanoi(n,p1,p3,p2);
   printf("\n\n");
   hanoi(n,p2,p3,p1);
   printf("\n\n");
   system("PAUSE");
   return 0;
}


void hanoi(int n, int origem, int destino, int intermediario){
    //movendo do pino 1 para o pino 2
    if (n==1){ 
        printf("Disco 1 do pino %d vai para o pino %d \n", origem, destino);
        return;
    }
    hanoi(n-1,origem,intermediario,destino);
    printf("Disco %d do pino %d vai para o pino %d\n", n, origem, destino);
    hanoi(n-1,intermediario,destino,origem);
}

//Yasmin Pimentel 110144341



