    #include <stdio.h>
    #define MAX 5000

    void organizar_vetor(int *vetor, int tamanho){
        int i, j, aux;

        for(i=0;i<tamanho;i++){
            for(j=0;j<tamanho-1;j++){
                if(vetor[j]>vetor[j+1]){
                    aux = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = aux;
                }
            }
        }

    }

    int contar_diferentes(int *vetor, int tamanho){
        int i, contador=0;

        for(i=0;i<tamanho;i++){
            if(vetor[i]!=vetor[i+1] && vetor[i]!=vetor[i-1])
                contador++;
        }
        return contador;
    }

    int main(){
        int teste, i, vetor[MAX], numeros;

        scanf("%d", &teste);

        for(i=0;i<teste;i++){
            scanf("%d", &vetor[i]);
        }


        organizar_vetor(vetor, teste);
        
     /*   for(i=0;i<teste;i++){
            printf("%d ", vetor[i]);
        } */

        numeros = contar_diferentes(vetor, teste);

        printf("%d\n", numeros);

        return 0;
    }
