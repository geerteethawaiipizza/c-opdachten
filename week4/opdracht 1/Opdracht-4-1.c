#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 FILE *fp;
 
char c;
 
int n;
 
 
fp=fopen("file.txt","rt");
 printf("string: ");
 
while(
(c=fgetc(fp)
) != EOF)
{
 
n=ftell(fp);
 
printf("%c",c);
 
}
 printf(" \ncharamount: %d", n);
 
fclose(fp);
 
return 0;
}