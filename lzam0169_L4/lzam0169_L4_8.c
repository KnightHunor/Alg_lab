/* Laszlo Hunor
 * lzam0169
 * 611
 */

/* rokon szamok */

#include <stdio.h>

void kozos(int a, int b, int t[])
{
    int aux, copy = b;
    while (a != 0)
    {
        b = copy;
        aux = a % 10;
        while(b != 0)
        {
            if(aux == b % 10)
            {
                t[aux]++;
            }
            b /= 10;
        }
        a /= 10;
    }
}

int f_count(int t[])
{
    int i, count = 0;
    
    for (i = 0; i <= 9; i++)
        if (t[i] > 0)
            count++;
    return count;
}

void eval(int count)
{
    if (count >= 2)
    {
        printf("Rokon szamok");
    }
    else
    {
        printf("Nem rokon szamok");
    }
}

void read(int *a, int *b)
{
    printf("Adja me a ket szamot: ");
    scanf("%d%d", a, b);
}

int main()
{
    int a, b, t[10] = {0};

    read(&a, &b);
    kozos(a, b, t);
    eval(f_count(t));

    return 0;
}
