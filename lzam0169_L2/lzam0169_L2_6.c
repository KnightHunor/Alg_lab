/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169_L2
 */

/* irjunk programot, amely atalakit egy romai szamot arab szamma */


#include <stdio.h>
#include <string.h>

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

int rtoi(char *r);

int main()
{
    char r[20];

}
