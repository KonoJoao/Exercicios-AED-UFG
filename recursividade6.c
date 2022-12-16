#include <stdio.h>

int fatorial_duplo(int numero){
    long i;

if(numero%2==0){
    fatorial_duplo(numero-1);
}else {
    if(numero<=1){
return 1;
    } else {
    
i = numero * fatorial_duplo(numero-2);

return i;
}
}

}

int main(){
    int numero;
    long fatorial;
    scanf("%d", &numero);

   fatorial = fatorial_duplo(numero);
   
   printf("%ld", fatorial);
}