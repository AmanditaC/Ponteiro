#include <stdio.h>//Biblioteca para as funções principais
#include <math.h>//Biblioteca responsável pelas operações matemáticas

void calcula_hexagono(float l, float *area, float *perimetro);//protótipo da função

int main(){//Função primcipal

    float l, area, perimetro;//declaração das variáveis

    printf("Informe o numero de lados:\n");//Pedindo o número de lados
    scanf("%f", &l);//Lendo e armazenando o número de lados

    system("cls");//Apagando o printf acima

    calcula_hexagono(l, &area, &perimetro);//Chamando a função para a principal

    printf("ÁREA = %2.f\tPERIMETRO = %2.f", area, perimetro);//Imprimindo o resultado da área e do perimetro

    return 0;//Encerrando a função principal
}

void calcula_hexagono(float l, float *area, float *perimetro){//Declaração da função

    *area = 3*pow(l,2)* sqrt(3)/2;//Operação para o cálculo da área

    *perimetro = 6*l;//Operação para o cálculo do perimetro
}