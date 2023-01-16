#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persoon {
    char naam[100];
    int leeftijd;
};

int main() {
    struct persoon* mensen = NULL;
    int num_mensen = 0;
    char naam[100];
    mensen = malloc(sizeof(struct persoon) * num_mensen);

    while(1){
        printf("Enter name (or 'q' to quit): ");
        scanf("%s", naam);

        if(naam[0] == 'q')
            break;
        mensen = realloc(mensen, ++num_mensen * sizeof(struct persoon));
        strcpy(mensen[num_mensen-1].naam,naam);

        printf("Enter age: ");
        scanf("%d", &mensen[num_mensen-1].leeftijd);
    }

    for (int i = 0; i < num_mensen; i++)
        printf("Naam: %s, leeftijd: %d\n", mensen[i].naam, mensen[i].leeftijd);

    free(mensen);
    return 0;
}