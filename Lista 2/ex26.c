//ex26

int main(){
    
    int a, b, c, maior, menor, i, soma;
    do{
    printf("Insira um numero inteiro maior que um:");
    scanf("%d", &a);
    
    if(a<=1) printf("O numero deve ser maior que 1\n");
    }while (a<=1);
    
    printf("Insira um numero inteiro:");
    scanf("%d", &b);
    maior=b;
    printf("Insira um numero inteiro:");
    scanf("%d", &c);
    if(c>b) {
        maior=c;
        menor=b;
    }
    else menor=c;
    soma=0;
    for(i=menor;i<=maior;i++){
        if(i%a==0) soma+=i;
    }
    
    printf("A soma de todos os numeros divisiveis por %d\nentre %d e %d : %d\n",a, maior, menor, soma);
    
    system("PAUSE");
    return 0;
}
