# include <stdio.h>
# define INT_MIN -2147483648
int maximo(int *v, int tam, int novo_max){
    if(tam == 1) {
        if (v[tam-1]>novo_max) {
            return v[tam-1];
        } else {
            return novo_max;
        }
    }
    if (novo_max > v[tam-1]) {
        return maximo(v, tam-1, novo_max);        
    } else {
        return maximo(v, tam-1, v[tam-1]);
    }
}

int main (){
    int vetor[10] = {1,2,3,4,15,6,7,8,9,10};
    int tamanho_do_vetor = 10;

    printf("O maximo eh: %i \n", maximo(vetor,tamanho_do_vetor, INT_MIN));
    return 0;
}