#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int a, b, c, maior;
    
    printf("Insira um numero:");
    scanf("%d", &a);
    getchar();
    
    maior=a;
    
    printf("Insira um numero:");
    scanf("%d", &b);
    getchar();
    
    if(b>a)maior=b;
    
    printf("Insira um numero:");
    scanf("%d", &c);
    getchar();
    
    if(c>a&&c>b)maior=c;
    
    printf("O maior numero: %d\n\n",maior);
    
    system("PAUSE");
    
    return 0;
    
}
