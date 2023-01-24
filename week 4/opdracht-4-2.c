#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct persoon {
    char naam[60];
    int leeftijd;
    
};

int main() {
    
    int aantal_mensen = 0;
    char naam[60];
    struct persoon* mensen = NULL;
    
    mensen = malloc(sizeof(struct persoon) * aantal_mensen);

    while(1){
        printf("Vul naam in: (Of druk 's' om te stoppen):");
        scanf("%s", naam);

        if(naam[0] == 's')
            break;
        mensen = realloc(mensen, ++ aantal_mensen * sizeof(struct persoon));
        strcpy(mensen[aantal_mensen-1].naam,naam);


        printf("Vul leeftijd in:");
        scanf("%d", &mensen[aantal_mensen-1].leeftijd);
    }

    for (int i = 0; i < aantal_mensen; i++)
        printf("Naam:%s, leeftijd:%d\n", mensen[i].naam, mensen[i].leeftijd);

    free(mensen);
    return 0;
}