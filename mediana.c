#include <stdio.h>
#define MAX 1000000

void organizar_array(long *array, int tamanho){
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

int main(){
    int teste, i;
    long array[MAX];
    float mediana;

    scanf("%d", &teste);

    for(i=0;i<teste;i++){
        scanf("%ld", &array[i]);
    }
    organizar_array(array, teste);

    if(teste%2==0){
        mediana = (float)(array[teste/2] + array[(teste/2)-1])/2;
    } else {
        mediana = (float)array[teste/2];
    }
    printf("%.2lf\n", mediana);
}
