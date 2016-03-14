/*Em uma padaria o padeiro deseja saber qual o custo
de fabricação do pão de forma e determinar por quanto terá que
vender o pão, tendo um lucro de 30%. Sabendo-se que a receita
do pão leva farinha, água e fermento, escreva um programa em C
que lê a quantidade de quilos de farinha, o valor do quilo da
farinha, a quantidade de litros de água, o valor do litro de água, a
quantidade de gramas de fermento, o valor do grama do fermento,
02/06/2010 4
a quantidade de quilowatt-hora, o custo do quilowatt-hora, a
quantidade de pães que ele faz com esses material, o percentual
de imposto que o padeiro paga por pão e calcula o preço de custo
e o preço de venda de um pão.*/

#include<stdio.h>
#include<stdlib.h>

int main()  
{
    
    float fr;  
    float pfr;
    float h2o;
    float prh2o;
    float fm;
    float pfm;
    float qw;
    float pqw;
    float imp;
    float qp;
    
    
    printf("Insira a quantidade em quilos de farinha: ");
    scanf("%f", &fr);
    getchar();
    if(fr<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira a quantidade em quilos de farinha: ");
             scanf("%f", &fr);
             getchar();
              } while(fr<0);
              }
    printf("Insira o valor do quilo da farinha: ");
    scanf("%f", &pfr);
    getchar();
    if(pfr<0) {
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira o valor do quilo da farinha: ");
             scanf("%f", &pfr);
             getchar();              
             } while(pfr<0);
             }
    
    
    printf("Insira a quantidade em litros de agua: ");
    scanf("%f", &h2o);
    getchar();
    if(h2o<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira a quantidade em litros de agua: ");
             scanf("%f", &h2o);
             getchar();
              } while(h2o<0);
              }
    printf("Insira o valor do litro da agua: ");
    scanf("%f", &prh2o);
    getchar();
    if(prh2o<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira o valor do litro da agua: ");
             scanf("%f", &prh2o);
             getchar();
              } while(prh2o<0);
              }
    
        
    printf("Insira a quantidade em quilos de fermento:");
    scanf("%f", &fm);
    getchar();
    
    if(fm<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira a quantidade em quilos de fermento: ");
             scanf("%f", &fm);
             getchar();
              } while(fm<0);
              }    
    
    
       
    
    printf("Insira o valor do quilo do fermento:");
    scanf("%f", &pfm);
    getchar();
    if(pfm<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira o valor do quilo de fermento: ");
             scanf("%f", &pfm);
             getchar();
              } while(pfm<0);
              }    
              
              
            
    
    printf("Insira a quantidade de Quilowatts gasta:");
    scanf("%f", &qw);
    getchar();
    
    if(qw<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira a quantidade de Quilowatts gasta: ");
             scanf("%f", &qw);
             getchar();
              } while(qw<0);
              }    
              
           
    printf("Insira o valor do quilowatt:");
    scanf("%f", &pqw);
    getchar();    
    
    if(pqw<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira o valor do quilowatt:");
             scanf("%f", &pqw);
             getchar();
             }while(pqw<0);
             }
    
    printf("Insira o valor do percentual de imposto sobre cada pao sem o simbolo porcento:");
    scanf("%f", &imp);
    getchar();
    if(imp<0) { 
             do {
             printf("Valor ou quantidade nao podem ser negativos\n"); 
             printf("Insira o valor do percentual de imposto sobre cada pao sem o simbolo porcento:");
             scanf("%f", &imp);
             getchar();
             }while(imp<0);
             }
    printf("Insira a quantidade de paes produzida:");
    scanf("%f", &qp);
    getchar();
    if(qp<0) {
             do{
             printf("Valor ou quantidade nao podem ser negativos\n");
             scanf("%f", &qp);
             getchar();
             }while(qp<0);
             }
    
    printf("O custo final de cada pao foi: %.2f \n", (qp/((fr*pfr)+(h2o*prh2o)+(fm*pfm)+(qw*pqw)))*(1+(imp/100)));
    printf("O preco de venda de cada pao deve ser: %.2f \n", 1.3*(qp/((fr*pfr)+(h2o*prh2o)+(fm*pfm)+(qw*pqw)))*(1+(imp/100)));
    
    
    system ("PAUSE");
    
    return 0;

}
      
    
    
