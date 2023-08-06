#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i, array[5],even=0;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (array[i]%2==0)
        {
            even++;
        }
        
    }
    printf("%d valores pares",even);
    return 0;
}