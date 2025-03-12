#include <stdio.h>

int main(void) {
    float peso;
    float alt;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &alt);
    
    float IMC = peso / (alt * alt);
    
    printf("Você tem %.2f de IMC\n", IMC);
    
    if( IMC < 18.5 ) {
    printf("Diagnóstico: Baixo Peso"); 
} else {
    if( IMC <= 24.9) {
    printf("Diagnóstico: Intervalo Normal");
} else {
    if(IMC <= 29.9) {
    printf("Diagnóstico: Sobrepeso");
} else {
    if(IMC <= 34.9) {
    printf("Diagnóstico: Obesidade Classe 1");
} else {
    if(IMC <= 39.9) {
    printf("Diagnóstico: Obesidade Classe 2");
} else {
    if(IMC > 40) {
    printf("Diagnóstico: Obesidade Classe 3");
    }
    }
    }
    }
}
}   
    return 0;
}