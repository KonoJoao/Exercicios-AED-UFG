#include <stdio.h>

void recursividade(int n, int meta){
if(n >= meta){ //50
    printf("%d", n);
    return;
}
else{
    printf("%d ", n);
    n++;
    recursividade(n, meta);
}
}

int main(){
    int teste;
    scanf("%d", &teste);

    recursividade(0, teste);
}