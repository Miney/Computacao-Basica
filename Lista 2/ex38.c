//ex37
#include <stdio.h>
#include <stdlib.h>

int main(){
    /*A primeira linha foi
reservada para guardar as idades das crianças. Na segunda linha estão notas inteiras
de 0 a 10, que indicam o comportamento delas ao longo do ano e na terceira estão
valores de 0 a 10, que indicam o rendimento delas na escola.*/
    int comportamento[3][10],merecimento[10], j;
    char sim, nao;
    
    for(j=0;j<10;j++){
        printf("Insira a idade da crianca %d:", j);
        scanf("%d", &comportamento[0][j]);
        printf("Insira a nota <0 a 10> de comportamento de comportamento da crianca %d:", j);
        scanf("%d", &comportamento[1][j]);
        printf("Insira o rendimento escolar <0 a 10> da crianca %d:", j);
        scanf("%d", &comportamento[2][j]);
    }
    /*Antes de distribuir os
presentes, o Papai Noel consulta sua matriz para verificar quais crianças receberão seus
presentes e quais não. Só recebem presentes aquelas que têm idade inferior a 12 anos
e que tenham obtido notas de comportamento acima de 8 e rendimento na escola
acima de 6.*/
    for(j=0;j<10;j++){
        if(comportamento[0][j]>=12) merecimento[j]==nao;
        else if(comportamento[1][j]>8&&comportamento[2][j]>6) merecimento[j]==sim;
        else merecimento[j]==nao; 
    }
    
    printf("As criancas que vao ganhar presente:\n");
    for(j=0;j<10;j++){
        if(merecimento[j]==sim) printf("%d\n", j);
    }
     
    
    system ("PAUSE");
    return 0;
}
