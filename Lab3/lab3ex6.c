#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float h, f, g;
    int x=1;
    
    printf("\n\tx\t| y(x)\n\t---------------\n");   
    for(x=1;x<=10;x++){
                      
        h=pow(x,2)-16;
        
        if(h>=0){
            f=pow(x,2)-16;
        }
        
        if(h<0) {
            f=1;
        }
        
        if(0==f){
            g=pow(x,2)+16;
        }
        
        if(f>0){
            g=0;
        }
        printf("\t%d\t| %.0f\n",x,f+g);
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
