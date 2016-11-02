/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonoito: lzam0169
 */

/* Irjuk ki egy 60-as szamrendszerben megadott szamot 10-es szamrendszerbe */

#include <stdio.h>

unsigned long convert60(const char *s)
{
    int i = 0;
    unsigned long n = 0;

    while (s[i])
    {
        if ('0' <= s[i] && s[i] <= '9')
        {
            n = n * 60 + (s[i] - '0');
            i++;
        }
        else // if (s[i] == '(')
        {
            n = n * 60 + (10 * (s[i + 1] - '0') + (s[i + 2] - '0'));
            i += 4;
        }
    }

    return (n);
}

int main()
{
    char s[100];
    
    /* read string */
    printf("szam (60): ");
    scanf("%s", s);

    printf("\naz eredmeny: %lu\n", convert60(s));

    return (0);
}
