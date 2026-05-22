#include <stdio.h>
int main (){
    float notas []=  {6.5 , 7.1, 6, 5, 6.1};
    int cantidad = sizeof(notas) / sizeof(notas[0]);
    float suma= 0;
    float promedio;
    for(int i = 0; i < 5; i++) {
        printf("Nota %d: %.1f\n", i + 1, notas[i]);
        suma+= notas[i];

    }
    //promedio=suma/5;
    printf("promedio: %.2f\n", suma/5);


    return 0; 

}

