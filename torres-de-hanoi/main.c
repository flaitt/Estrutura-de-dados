# include <stdio.h>
// considerar 3 torres, origem, auxiliar e destino

void hanoi(int n, char origem, char destino, char aux){
    if (n>0) {
        hanoi(n-1, origem, aux, destino);
        printf("move de %c para %c \n", origem, destino);
        hanoi(n-1, aux, destino,origem);
    }
}

int main(){
    int numero_de_arcos = 5;
    hanoi(numero_de_arcos,'a','c','b');
    return 0;
}