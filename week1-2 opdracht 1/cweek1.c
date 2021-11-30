#include <stdio.h>
#include "jump.c"
void print_function( char letter );
int ctr;
int count;
int main( void )
{
	char star = '*';
	char dash = '-';
	for (ctr = 0 ; ctr < 10; ctr++ )
	{
        for (count = 0 ; count < 10; count++ )
        {
		print_function( star );
		print_function( dash );
		printf("\n");
        }
	}
	return 0;
}
void print_function ( char letter )
{
	for ( ctr = 0; ctr < 9; ctr++) 
	{
		printf("%c", letter);
	}
}

