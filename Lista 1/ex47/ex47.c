#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int a, b;
    
    printf("Insira o primeiro valor:");
    scanf("%d", &a);
    getchar();
    
    printf("Insira o segundo valor:");
    scanf("%d", &b);
    getchar();
    
    if(a%b==0||b%a==0) printf("Os valores sao multiplos\n\n");
    
    else printf("Os valores nao sao multiplos\n\n");
    
    system("PAUSE");
    
    return 0;
    
}

