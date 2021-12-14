#include <stdio.h>
#include <string.h>

int main()
{
    char zin[200];
    int x, Chars;
    Chars = 0;
    printf("zin:\n");
    gets(zin);

    for(x = 0; zin[x] != '\0'; x++){
        if(zin[x] != '\0'){
            Chars++;
        }
    }

    printf("Totaal Caracters in de zin: %d",Chars);

    return 0;
}