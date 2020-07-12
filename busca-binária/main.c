# include <stdio.h>

int busca_binaria(int *dados, int l, int r, int x) {
    int m = (l + r)/2;
    if (l > r){
        return -1;
    }
    if (dados[m] == x){
        return m;
    }else if (dados[m] < x){
        return busca_binaria(dados, m + 1, r, x);
    } else {
        return busca_binaria(dados, l, m-1, x);
    }
}

int main(){
    int vetor[5] = {1,2,3,4,5};
    printf("Hellso World! \n");
    printf("%i \n", busca_binaria(vetor, 0, 3, 5));
    return 0;
}