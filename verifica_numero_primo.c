#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int primo(int num) {
    if (num <= 1) {
        return 0; 
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (primo(numero)) {
        printf(" 1\n",&numero);
    } else {
        printf(" 0\n",&numero);
    }

    return 0;
}
