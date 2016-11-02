/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Torzstenyezokre bontas */

#include <stdio.h>

void be(int *num)
{
    printf("Irjon be egy szamot: ");
    scanf("%d", num);
}

int div_count(int *num, int div) /* megszamolja a szam osztoit */
{
    int count = 0;
    while (!(*num % div))
    {
        *num /= div;
        count++;
    }

    return (count);
}

void div(int num)
{
    int m_div = 2, count, aux = num;

    while (num != 1 && m_div <= aux)
    {
        if (!(num % m_div))
        {
            count = div_count(&num, m_div);
            if (count > 1)
                printf("%d^%d ", m_div, count);
            else
                printf("%d ", m_div);

            if (num != 1)
                printf("* ");
        }
        m_div++;
    }
    printf("\n");
}

int main()
{
    int num = 1;

    be(&num);
    div(num);

    return (0);
}
