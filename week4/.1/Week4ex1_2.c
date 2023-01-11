#include<stdio.h>
#include <ctype.h>
FILE *fp, *ft;

int main(){

    char ch;
    fp=fopen("read.txt","r");
    ft=fopen("write.txt","w");
    
    if(fp == NULL || ft == NULL)
        printf("BESTAND BESTAAT NIET\n");

    else{
        
        while((ch=fgetc(fp)) != EOF){
            if(islower(ch) || isupper(ch)){
                ch=ch+1;
            }
            if (ch > 'z'){
                ch = 'a';
            }
            if (ch == '['){
                ch = 'A';
            }    
        putc(ch,ft);                   
        }
    }
    fclose(fp);
    fclose(ft);
    printf("INHOUD IS VERPLAATST");

    return 0;
}