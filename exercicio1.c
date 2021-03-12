#include <stdio.h>
#include <unistd.h>
#include <math.h>


/*Faça um programa que leia 5 números.
 Este programa deve ter um menu que permita ao usuário escolher qual opção de cálculo ele deseja realizar: média aritmética simples, média ponderada (ler os pesos associados a cada nota que serão informados pelo usuário), desvio padrão, maior valor e menor valor.
 A leitura dos 5 valores também deve ser uma das opções do menu.*/

void main(){

    int sel = 0;
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    int var5 = 0;

    printf("Escreva os 5 números\n");

    scanf("%d", &var1);
    scanf("%d", &var2);
    scanf("%d", &var3);
    scanf("%d", &var4);
    scanf("%d", &var5);

    printf("\n\n\nDigite o númeoro da opção desejada:\n(1) Média aritmética simples:\n(2) Média ponderada:\n(3) Desvio Padrão:\n(4) Maior Valor:\n(5) Menor Valor\n(6) Ler os 5 valores:\n");
    scanf("%d",&sel);


    
    while (1){
        printf("Você escolheu a opção número %d\n", sel);
        printf("Calculando a sua resposta...\n");
        sleep(2);

        if (sel == 1){
            double result = (var1 + var2 + var3 + var4 + var5)/5;
            printf("O seu resultado é %lf\n", result);
            break;
        }

        else if (sel == 2){
            int peso1 = 0;
            int peso2 = 0;
            int peso3 = 0;
            int peso4 = 0;
            int peso5 = 0;

            printf("Diga quais são os pesos associados a cada um dos 5 números digitados, respectivamente:\n");
            printf("--- Peso 1:\n");
            scanf("%d", &peso1);
            printf("--- Peso 2:\n");
            scanf("%d", &peso2);
            printf("--- Peso 3:\n");
            scanf("%d", &peso3);
            printf("--- Peso 4:\n");
            scanf("%d", &peso4);
            printf("--- Peso 5:\n");
            scanf("%d", &peso5);

            double result2 = (var1*peso1 + var2*peso2 + var3*peso3 + var4*peso4 + var5*peso5)/(peso1 + peso2 + peso3 + peso4 + peso5);
            printf("O seu resultado é %lf\n", result2);
            break; 
        }
        else if (sel == 3){
            double media = (var1 + var2 + var3 + var4 + var5)/5;
            double desvio_padrao =sqrt((pow((var1 - media), 2) + pow((var2 - media), 2) + pow((var3 - media), 2) + pow((var4 - media), 2) + pow((var5 - media), 2))/5);
            printf("%lf\n", desvio_padrao);
            break;
        }

        else if (sel == 4){
            if (var1 >= var2 && var1 >= var3 && var1 >= var4 && var1 >= var5){
                printf("%d é o maior número.", var1);}
            if (var2 >= var1 && var2 >= var3 && var2 >= var4 && var2 >= var5){
                printf("%d é o maior número.", var2);}
            if (var3 >= var1 && var3 >= var2 && var3 >= var4 && var3 >= var5){
                printf("%d é o maior número.", var3);}
            if (var4 >= var1 && var4 >= var2 && var4 >= var3 && var4 >= var5){
                printf("%d é o maior número.", var4);}
            if (var5 >= var1 && var5 >= var2 && var5 >= var3 && var5 >= var4){
                printf("%d é o maior número.", var5);}
            break;

        
            }
        
        else if (sel == 5){
            if (var1 <= var2 && var1 <= var3 && var1 <= var4 && var1 <= var5){
                printf("%d é o menor número.", var1);}
            if (var2 <= var1 && var2 <= var3 && var2 <= var4 && var2 <= var5){
                printf("%d é o menor número.", var2);}
            if (var3 <= var1 && var3 <= var2 && var3 <= var4 && var3 <= var5){
                printf("%d é o menor número.", var3);}
            if (var4 <= var1 && var4 <= var2 && var4 <= var3 && var4 <= var5){
                printf("%d é o menor número.", var4);}
            if (var5 <= var1 && var5 <= var2 && var5 <= var3 && var5 <= var4){
                printf("%d é o menor número.", var5);}

            break;
            }

        else if (sel == 6){
        printf("%d,\n", var1);
        printf("-------\n");
        printf("%d,\n", var2);
        printf("-------\n");
        printf("%d,\n", var3);
        printf("-------\n");
        printf("%d,\n", var4);
        printf("-------\n");
        printf("%d,\n", var5);
        break;
        }

        else{
            printf("digite um número entre 1 e 6\n");
        }
    }


        

    printf("Aqui está sua resposta\n");

}

  