#include<stdio.h>
int main()
{
    int a=32768;
    unsigned int b=65536;
    printf("%d %d\n", a,b);

    printf("%d %c\n",'A','A');

    printf("size of char : %d\n", sizeof(char));
    printf("size of integer : %d\n", sizeof(int));
    printf("size of float : %d\n", sizeof(float));
    printf("size of double : %d\n", sizeof(double));

    printf("'a' occupied %d bytes\n", sizeof('a'));
    printf(" 7 occupied %d bytes\n", sizeof(7));
    printf("7.0 occupied %d bytes\n", sizeof(7.0));

    printf("%d\n",sizeof('\n'));
    printf("%d %c");printf("\n");
    printf("\nab");printf("\n");
    printf("\bsi");printf("\n");
    printf("\rha");printf("\n");
    
    printf("c:\tc\bin");printf("\n");
    printf("c:\\tc\\bin");printf("\n");

       printf("%d %d %d %d\n",72,072,0x72,0X72);  

    printf("%d %o %x\n", 72,72,72);

    printf("%i %i %i %i\n", 72,072,0x72,0X72);

    printf("%05d,%5d,%-5d\n", 32,32,32);

    printf("%6.3f,%06.3f,%8.3f,%6.0f\n",45.6,45.6,45.6,45.6);


    return 0;
}
/*
0x72  0X72 hex
=7*16^1 + 2*16^0 
=7*16  + 2*1
=112 + 2
=114 dex

072 oct
=7*8^1 + 2*8^0
=7*8 + 2*1
=56 + 2
=58 Dec
*/