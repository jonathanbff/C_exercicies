#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUMERODETENTATIVAS 5
//#define sets a variable tha can't change in the code
int main(){
//int main(){...} is the principal way for setting the main algoritim, that'll rules our code

    printf("********************************************\n");
    printf("**************Este é o jogo*****************\n");
    printf("********************************************\n");
    printf("para ganha-lo você precisa acertar o numero segreto\n");
    printf("Regras: você têm somente 10 chances, para acertar o número de 1 a 100\n"); 

    srand(time(NULL)); 
    int numerosegreto = rand()%101;

    int chute;

    int ganhou = 0;
    int tentativa = 1;


    while (1){

    	printf("Essa é a tentativa %d \n", tentativa);
	    printf("Qual o seu chute? ");
	    scanf("%d", &chute); //always use the "&" before the variable that u are using scanf
	    printf("Seu chute foi %d \n", chute);

	   if (chute < 0){
	   	printf("O número não pode ser negativo, tente novamente!\n");
	    continue; //The looping code stops here, but back to the "for" condition
	   }

	    int acertou = (chute==numerosegreto);
	    int maior = chute > numerosegreto;

	    if(acertou){
	    	printf("Parabens, você acertou! \n");
	    	printf("você é um bom jogador\n");
	    	break; //when i change the "ganhou" value i can directly stop "while" condition
	    }
	    else if (maior){ //"else if" Condition used to not run if the other condition is true
	    		printf("Seu número foi maior que o numero segreto\n");
	    	}
	    else {
	    		printf("Seu número foi menor que o numero segreto\n");
	    	}
	    tentativa++;	
	    }
     //this print will aper when stop the "While Loop"
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas \n", tentativa);

}