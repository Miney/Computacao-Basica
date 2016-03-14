//ex24

int main(){
    
    float y, x[19];
    int i;
    
    printf("Insira o numero:");
    scanf("%f", &y);
       
    for(i=0;i<20;i++){
        x[0]=y/2;
        x[i+1]=((pow(x[i],2))+y)/(2*x[i]);
        printf("A aproximacao %d: %f\n", i, x[i]);
    }
    system("PAUSE");
    return 12;
}
