//ex 10
#include <stdio.h>
#include<stdlib.h>

int main(){
    
    float a, b, c, n1, n2, n3;
    
    printf("Insira o primeiro numero:");
    scanf("%f", &a);
    getchar();
    n1=a;
    
    printf("Insira o segundo numero:");
    scanf("%f", &b);
    getchar();    
    if(b>a){
    n1=b;
    n2=a;
    }
    else n2=b;
    
    printf("Insira o terceiro numero:");
    scanf("%f", &c);
    getchar();
    if(c>a&&c>b){
    n3=n2;
    n2=n1;
    n1=c;
    }
    else if(c>n2&&c<n1){
    n3=n2;
    n2=c;
    }
    else n3=c;
    
    printf("numeros em ordem crescente:%.2f , %.2f, %.2f ", n3, n2, n1);
       
    
    system("PAUSE");   
    return 0;
}
