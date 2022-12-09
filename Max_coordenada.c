#include <stdio.h>
#define MAX 1000

/*void organizar_vetor(int *vetor, int entrada){
    
int i, j, aux;

for(i=1;i<entrada;i++){
    printf("arroz\n");
    
    for(j=0;j<entrada-1;j++){
        printf("comida\n");
        
        if(vetor[j]<vetor[j++]){
            printf("batata\n");
            
            aux = vetor[j];
            vetor[j] = vetor[j++];
            vetor[j++] = aux;
        }
        
    }
}
}*/

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
      //  printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
          //  printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}


int main(){
int entrada, i, vetor[MAX];

scanf("%d", &entrada);

return 0;
}