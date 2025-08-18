#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main()
{
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numeropensado = numerogrande % 100;

    int chute;
    int tentativas = 1;

    while (1) {
        printf("☆ Vamos começar! ☆\n");
        printf("Tentativa %d\n\n", tentativas);
        printf("Digite seu número: ");
        scanf("%d", &chute);

        if (chute < 0) {
            printf("Tente novamente. Você não pode usar números negativos\n");
            continue;
        }

        if (chute == numeropensado) {
            printf("⊹ ₊  ⁺‧₊˚ ♡ ପVocê acertou!ଓ ♡˚₊‧⁺ ₊ ⊹\n");
            printf("Parabéns!");
            printf("Você usou %d tentativas.\n", tentativas);
            break;
        }

        if (chute > numeropensado) {
            printf("Você errou! O número que você digitou é maior que o número sorteado!\n");
        } else {
            printf("Você errou! O número que você digitou é menor que o número sorteado!\n");
        }

        tentativas++;
    }

    printf("Fim da rodada, jogue novamente!\n");
    return 0;
}
