#include <stdio.h>

int ackerman(int m, int n){
   // int *aux=0;
    if(m==0){
       n++;
       return n;
    }
    else if(m > 0 && n==0){
      ackerman(m-1, 1);
    } else {
      ackerman(m-1, ackerman(m, n-1));
    } 
}

int main(){
    int m, n, valorFinal=0;
    scanf("%d %d", &m, &n);

    //printf("0 ");

   valorFinal = ackerman(m, n);
   
   printf("%d\n", valorFinal);
   
   return 0;
}
