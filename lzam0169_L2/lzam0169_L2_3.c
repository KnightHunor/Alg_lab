/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Irjunk algritmust, amely megkeresi az elso n ikerprimet */

#include <stdio.h>
#include <math.h>

int prim(int num)
{
    /* nem nezem hogy paros, vagy 2 vagy <2, mert a bemenet >=3 paratlan szam. */

    int i;

    for (i = 3; i < sqrt(num); i += 2)
    {
        if (!(num % i))
            return 0;
    }

    return 1;
}

void print_ikerprim(int n)
{
    int a = 3; // az elso ikerprim 3, 5;

    while (n)
    {
        if (prim(a) && prim(a + 2))
        {
            printf("(%d, %d), ", a, a + 2);
            n--;
        }
        a+=2;
    }
}

int main()
{
    unsigned n;
    printf("n = ");
    scanf("%d", &n);

    print_ikerprim(n);

    return 0;
}
