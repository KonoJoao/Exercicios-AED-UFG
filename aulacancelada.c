#include <stdio.h>
#define MAX 1000
/*void organizar_array(long *array, int tamanho){
int i, j;
long aux;

    for(i=0; i<tamanho; i++){
        for(j=0; j<tamanho-1; j++){
            if(array[j] > array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
}
*/
int main(){
    int qtdalunos, cancelamento, i, j=1, cancelada, alunos[MAX], contador=0;

    scanf("%d %d", &qtdalunos, &cancelamento);

    for(i=1;i<=qtdalunos;i++){
        scanf("%d", &alunos[i]);
        if(alunos[i]<=0)
            contador++;
    }
  //  organizar_array(array, teste);

    if(contador<cancelamento){
        printf("SIM\n");
    } else {
        printf("NAO\n");
        for(i=qtdalunos;i>0;i--){
            if(alunos[i]<=0)
                printf("%d\n", i);
        }
    }
    return 0;
    }

