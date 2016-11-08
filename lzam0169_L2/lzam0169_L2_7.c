/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* 10-bol romai szamrendszerbe */

#include <stdio.h>

void print2roman(int n)
{
    char *r100[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *r10[]  = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "CX"};
    char *r1[]   = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    for (int i = 1; i <= n/1000; i++)
        printf("M");
                                n %= 1000;
    printf("%s", r100[n/100]);  n %= 100;
    printf("%s", r10[n/10]);    n %= 10;
    printf("%s", r1[n]);
    printf("\n");
}

int main()
{

    print2roman(2048);

    return (0);
}
