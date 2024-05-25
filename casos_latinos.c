#include <stdio.h>

/*
1 - Nominativo
2 - Vocativo
3 - Genitivo
4 - Dativo
5 - Ablativo
6 - Acusativo

Qual o caso latino para o objeto direto?
R:

Acertou!
Errou!

*/

/*
int answer;
answer = getchar();
if(answer == '1') {
        printf("ok");
}
*/

int main()
{
        int answer;

        printf("1 - Nominativo\n");
        printf("2 - Vocativo\n");
        printf("3 - Genitivo\n");
        printf("4 - Dativo\n");
        printf("5 - Ablativo\n");
        printf("6 - Acusativo\n");

        printf("Qual o caso latino para o objeto direto?\n");
        printf("R: ");

        answer = getchar();

        if (answer == '6') {
                printf("Acertou!");
        } else {
                printf("Errouuuu!");
        }

        printf("\n");
        return 0;
}
