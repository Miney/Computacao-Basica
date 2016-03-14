#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int mulheres=0, homens=0, simMulheres=0, naoMulheres=0, simHomens=0, naoHomens=0;
    char sexo, resposta;
    
    printf("Insira o sexo da pessoa (M ou F) e depois a opiniao dela (S ou N).\nPara continuar pressione qualquer tecla\n\n");
    getchar();
    
    do{
    printf("Insira o sexo da pessoa:");
    scanf("%c", &sexo);
    getchar();
    
    if(sexo == 'F')  {
                      mulheres=mulheres+1;
                      printf("Insira a opiniao da pessoa:");
                      scanf("%c", &resposta);
                      getchar();
                      if(resposta=='S') simMulheres++;
                      if(resposta=='N') naoMulheres++;
                      }
            
            
    if(sexo == 'M')  {
                      homens=homens+1;
                      printf("Insira a opiniao da pessoa:");
                      scanf("%c", &resposta);
                      getchar();
                      if(resposta=='S') simHomens++;
                      if(resposta=='N') naoHomens++;
                      }
    
    
    }while (sexo!='S');

    printf("%d pessoas responderam sim\n", simMulheres+simHomens);
    printf("%d pessoas responderam nao\n", naoMulheres+naoHomens);
    printf("%d%% das mulheres responderam sim\n", 100*simMulheres/mulheres); 
    printf("%d%% dos homens responderam nao.\n\n", 100*naoHomens/homens);
    
    system ("PAUSE");
    return 0;
}
