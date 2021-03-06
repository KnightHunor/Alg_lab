/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Irjunk algoritmust, amely megkeresi es kiirja az elso n tokeletes szamot */

#include <stdio.h>

int tokeletes(unsigned n)
    /* eldonti az n szamrol hogy tokeletes-e vagy sem */
{
    int ossz = 1;
    int i;
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            ossz += i;
        }
    }
    if (ossz == n)
        return (1);
    return (0);
}

void print_tokeletes(int n)
    /* kiirja az elso n db tokeletes szamot*/
{
    int sz = 2;

    while (n != 0)
    {
        if (tokeletes(sz))
        {
            printf("%i, ", sz);
            n--;
        }
        sz++;
    }
}

int main()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    print_tokeletes(n);
    
    return (0);
}
