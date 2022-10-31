#include <stdio.h>
#define MAX 1000

/*void organizar_vetor(int *vetor, int *maior, int *menor, int entrada){
int i, j, aux;

for(i=0;i<entrada;i++){
    for(j=0;j<entrada-1;j++){
        if(vetor[j]<vetor[j++]){
            aux = 
        }
    }
}
} */

int main(){
int entrada, i, vetor[MAX], maior=0, menor=9999;

scanf("%d", &entrada);

for(i=0;i<entrada;i++){
    scanf("%d", &vetor[i]);
    if(vetor[i]>maior)
        maior = vetor[i];
    if(vetor[i]<menor)
        menor = vetor[i];
}

for(i=0;i<entrada-1;i++){
    printf("%d ", vetor[i]);
}
    printf("%d\n", vetor[i]);

for(i=entrada-1;i>0;i--){
    printf("%d ", vetor[i]);
}
    printf("%d\n", vetor[i]);

    printf("%d\n", maior);
    printf("%d\n", menor);

//organizar_vetor(vetor, &maior, &menor, entrada);

return 0;
}