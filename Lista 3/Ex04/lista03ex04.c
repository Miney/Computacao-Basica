/*Os dados são lidos da onde?? É via teclado mesmo?*/

//lista09ex04

#include<stdio.h>
#include<stdlib.h>

struct agenda{
    char nome[80], end[40];
    int telefone, dia, mes, ano;
};

int main(){
    struct agenda registros[10];
    int i;
    
    for(i=0;i<10;i++){
        printf("Insira nome do contato %d:", i);
        gets (registros[i].nome);
        printf("Insira endereço do contato %d:", i);
        gets (registros[i].end);
        printf("Insira telefone do contato %d:", i);
        scanf("%d", &registros[i].telefone);
        printf("Insira o dia de nascimento do contato %d:", i);
        scanf("%d", &registros[i].dia);
        printf("Insira o mes de nascimento do contato %d:", i);
        scanf("%d", &registros[i].mes);
        printf("Insira o ano de nascimento do contato %d:", i);
        scanf("%d", &registros[i].ano);
        getchar();
    }
    printf("Aniversariantes de dezembro:");
    for(i=0;i<10;i++)  if(registros[i].mes==12) puts(registros[i].nome);
    printf("\n\n");
    system("PAUSE");
    return 0;
}

