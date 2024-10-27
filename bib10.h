#include <stdio.h>

float maior_vet(float vet[], int tam_vet){

    float maior = vet[0];

    for(int i = 0; i < tam_vet; i++){ // Percorre o vetor para encontrar o maior elemento
        if(maior < vet[i])
            maior = vet[i];
    }
    return maior;
}
