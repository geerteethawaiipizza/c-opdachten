#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persoon {
    char naam[50];
    int leeftijd;
};

int main() {
    int num_mensen;
    printf("Hoeveel mensen wil je toevoegen?: ");
    scanf("%d", &num_mensen);

    struct persoon *mensen = (struct persoon *) malloc(num_mensen * sizeof(struct persoon));

    for (int i = 0; i < num_mensen; i++) {
        printf("Voer de naam en leeftijd in van de mensen %d: ", i + 1);
        scanf("%s %d", mensen[i].naam, &mensen[i].leeftijd);
    }

    printf("\nResults:\n");
    for (int i = 0; i < num_mensen; i++) {
        printf("Name: %s, Age: %d\n", mensen[i].naam, mensen[i].leeftijd);
    }

    free(mensen);
    return 0;
}
