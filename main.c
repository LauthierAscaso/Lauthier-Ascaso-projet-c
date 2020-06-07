// code de cesar

#include <stdio.h>
#include <stdlib.h>

// flush
void flush()
{
    while (getchar() != '\n')
        continue;
}

void cesar(char chaine[], int decalage)
{
    int i = 0;
    while (chaine[i] != '\0')
    {
        if (chaine[i] >= 'A' && chaine[i] <= 'Z')
        {
            char c = chaine[i] - 'A';
            c += decalage;
            c = c % 26;
            chaine[i] = c + 'A';
        }
        i++;
    }
    printf("%s", chaine);
}

// programme principal
int main()
{
    int decalage = 0;
    char chaine[256];
    char choix = 'c';
    // choix
    printf("Code de Cesar\n");
    printf("\nSaisir le decalage : ");
    scanf("%d", &decalage);
    flush();
    printf("\nSaisir la chaine a manipuler : ");
    scanf("%s", chaine);
    flush();
    printf("\nChiffrement [c] ou dechiffrement [d] : ");
    scanf("%c", &choix);
    // synthèse
    switch (choix)
    {
    case 'c':
        printf("\nChiffrement de la chaine %s avec un decalage de %d.\n", chaine, decalage);
        {
            cesar(chaine, decalage);
        }
        return 0;
    case 'd':
        printf("\nVous avez demande le dechiffrement de la chaine %s avec un decalage de %d.\n", chaine, decalage);
        {
            cesar(chaine, -decalage);
        }
        return 0;
    default:
        return -1;
    }
}
