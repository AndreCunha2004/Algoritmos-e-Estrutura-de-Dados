#include <stdio.h>
#include <math.h>

void volume_cilindro(float h, float r){
    float pi = 3.141592;
    float volume = pi * pow(r,2) * h;

    printf("VOLUME = %.2f !\n\n", volume);
}

