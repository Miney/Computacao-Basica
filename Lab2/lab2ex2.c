#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float n1, n2, n3, media;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &n1);
    getchar();
    
    printf("Insira a segunda nota: ");
    scanf("%f", &n2);
    getchar();
    
    printf("Insira a terceira nota: ");
    scanf("%f", &n3);
    getchar();
    
    media=(n1+n2+n3)/3;
    
    printf("Sua media foi: %.2f\n", media);
    
    if(media>=5) printf("Aprovado!\n\n");
    else if (media<5) printf("Reprovado!\n\n");
    
    system ("PAUSE");
    
    return 42;
}
