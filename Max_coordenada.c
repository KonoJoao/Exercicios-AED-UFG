#include <stdio.h>
#define MAX 1000

int comparar_valores(int x, int y, int z, int xa, int ya, int za) {
int valorx, valory, valorz;

valorx = x - xa;
valory = y - ya;
valorz = z - za;

if(valorx<0)
    valorx *= -1;
if(valory<0)
    valory *= -1;
if(valorz<0)
    valorz *= -1;

if(valorx>valory && valorx > valorz)
    return valorx;
else if(valory>valorx && valory > valorz)
    return valory;
else
    return valorz;

}


int main(){
int teste, x, y, z, xa, ya, za, valor;

scanf("%d", &teste);

scanf("%d %d %d", &xa, &ya, &za);

teste--;

while(teste--){
scanf("%d %d %d", &x, &y, &z);

valor = comparar_valores(x, y, z, xa, ya, za);

printf("%2.d", valor);

xa = x;
ya = y;
za = z;

}

return 0;
}