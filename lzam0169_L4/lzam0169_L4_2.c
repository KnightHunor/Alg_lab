/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Szamoljuk meg egy szovegben a massalhangzokat */

#include <stdio.h>
#include <string.h>

void read_solve()
{
    FILE *f = fopen("input_L4_2.txt", "r");

    char c;
    int count = 0;

    while ((c = fgetc(f)) != EOF)
    {
        if(strchr("aeiouAEIOU", c) != NULL)
            count++;
    }

    printf("%d\n", count);
}

int main()
{
    read_solve();

    return 0;
}
