#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moyenne = 0;
    float nombre1, nombre2, nombre3;

    printf("Veuillez saisir un premier nombre: ");
    scanf("%f", &nombre1);

    printf("Veuillez saisir un deuxi�me nombre: ");
    scanf("%f", &nombre2);

    printf("Veuillez saisir un troisi�me nombre: ");
    scanf("%f", &nombre3);

    moyenne = (nombre1 + nombre2 + nombre3)/3;
    printf("La moyenne est de %f", moyenne);
}
