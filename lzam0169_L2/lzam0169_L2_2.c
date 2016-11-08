/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Hatarozzzuk meg az 1 millional kissebb legnagyobb primszamot */

#include <stdio.h>
#include <math.h>

int prim(int num)
{

    if (!(num % 2))
        return (0);
    int i;
    for (i = 3; i <= sqrt(num); i += 2)
    {
        if (!(num % i))
            return (0);
    }
    return (1);
}

int main()
{
    int num = 999997;

    while (!prim(num--));

    printf("%d\n", num + 1);

    return (0);
}
