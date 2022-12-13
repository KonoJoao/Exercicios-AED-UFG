#include <stdio.h>

void fibonacci(int meta, int n1, int n2){
    int aux;
if(meta < 0){
    return;
}
else {
    printf("%d ", n2);

    aux = n2;
    n2 += n1;
    n1 = aux;

    fibonacci(meta-1, n1, n2);
}
}

int main(){
    int teste;
    scanf("%d", &teste);

    //printf("0 ");

    fibonacci(teste, 1, 0);
}