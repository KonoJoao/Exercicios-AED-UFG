#include <stdio.h>
#define MAX 1000 * 1000


/*void binario(int n{
    if(n == 0){
        printf("%d", n);

    }
    else{
        binario(n/2);
        printf("%d", n % 2);
    }
} */

int converter_decimal(int numero){
    if(numero!=0){
        converter_decimal(numero/2);
        printf("%d", numero%2);
    } else {
       // printf("0");
    }
}

int main(){
    int teste, numero;
    scanf("%d", &teste);


    while(teste--){
        scanf("%d", &numero);

        converter_decimal(numero);
    }

 //  printf("%d\n", valorFinal);
   
   return 0;
}
