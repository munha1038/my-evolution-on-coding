#include <stdio.h>
int main(){
    int hora, min, seg, res;
    
     printf("digite a hora:");
     scanf("%d", &hora);
    
     printf("\nDigite os minutos:");
     scanf("%d", &min);
    
     printf("\nDigite os segundos:");
     scanf("%d", &seg);
    
     res = hora * 60 * 60;
     res = min * 60 + res;
     res = seg + res;
    
     printf("\nJa se passaram: %d segundos\n", res);
   
    return 0;
}    
