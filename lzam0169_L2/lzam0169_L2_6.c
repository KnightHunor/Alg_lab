/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* irjunk programot, amely atalakit egy romai szamot arab szamma */


#include <stdio.h>

int rsz(char c)
{
    switch (c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0;
    }
    return (0);
}

int rtoi(const char *r)
{
    int c1; /* first character */
    int c2; /* next character */
    int sum = 0;
    while (*r)
    {
        c1 = rsz(*r);
        c2 = rsz(*(r + 1));

        if (c1 < c2)
        {
            sum += (c2 - c1);
            r++;
        }
        else
            sum += c1;
        r++;
    }

    return (sum);
}

int main()
{
    char r[20];
    
    printf("Adjon meg egy romai szamot: ");
    scanf("%s", r);
    printf("%d\n", rtoi(r));

    return(0);
}
