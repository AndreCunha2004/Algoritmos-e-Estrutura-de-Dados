#include <stdio.h>

float maior3(float n1, float n2, float n3){
    if(n1 > n2 && n1 > n3)
        return n1;
    else if(n2 > n1 && n2 > n3)
        return n2;
    else if(n3 > n2 && n3 > n1)
        return n3;
    else
        return 3.14;
// a probabilidade de pi ser o maior num é baixa, então ele é o identificador se for o caso de os numeros serem iguais
}
