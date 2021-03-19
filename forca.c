#include <stdio.h>
#include <string.h>

void abertura() {
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");		
}

int main(){

    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;
	
	abertura();

    do {

        for(int i = 0; i < strlen(palavrasecreta); i++) {
            int achou = 0;

            for(int j = 0; j < tentativas; j++) {
                if(chutes[j] == palavrasecreta[i]) {
                    achou = 1;
                    break;
                }
            }

            if(achou) {
                printf("%c ", palavrasecreta[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");

        char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;


    } while (!acertou && !enforcou);

}
