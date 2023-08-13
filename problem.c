#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    float N1, N2, N3, N4, MEDIA, Media_final, X;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    MEDIA = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);
    printf("Media: %.1f\n", MEDIA);
    if (MEDIA >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (MEDIA < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (MEDIA >= 5 && MEDIA <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &X);
        printf("Nota do exame: %.1f\n", X);
        Media_final = (MEDIA + X) / 2;
        if (Media_final >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (Media_final <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", Media_final);
    }

    return 0;
}