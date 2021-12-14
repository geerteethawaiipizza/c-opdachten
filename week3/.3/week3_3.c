#include <stdio.h>

struct student{
    char naam[20];
    int leeftijd;

struct opleiding{
    char naam[20];
    int instroomjaar;
        } opleiding;
    };


int main()
{
    int i;
    int aantal = 4;

    printf("Aantal studenten: ");
    scanf("%i", &aantal);

    struct student list[10];

    
    if (aantal >= 2){
    printf("Geef de gegevens van de %d studenten\n", aantal);   
    }
    else if (aantal == 1){
    printf("Geef de gegevens van %d student\n", aantal);  
    }
    else if (aantal == 0){
    printf("error", aantal);
    }
    else{
    printf("error");
    return 0;
    }


    for (i = 0; i < aantal; i++){

        printf("naam:");
        scanf("%s", list[i].naam);

        printf("leeftijd: ");
        scanf("%d", &list[i].leeftijd);

        printf("instroomjaar: ");
        scanf("%s", list[i].opleiding.instroomjaar);

        printf("\n");
    }

    for (i = 0; i < aantal; i++)
    {
        printf("Naam student: %s\nLeeftijd student:  %s\nInstroomjaar: %d\n\n", list[i].naam, list[i].leeftijd, list[i].opleiding.instroomjaar);
    }

    return 0;
}
