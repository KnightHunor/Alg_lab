/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Adott egy verseny eredmenylistaja es a legkissebb pontsamamivel be elhet nevezni a kovetkezo fordulora
 * Hany szazalekot kepez a kovetkezo fordulora bejutottak szama? */

#include <stdio.h>

void read_solve()
{
    FILE *f = fopen("input_L4_1.txt", "r");
    
    float passPoint = 0;
    float currValue = 0;
    int totalCount = 0;
    int passedCount = 0;
    
    fscanf(f, "%f", &passPoint);
    
    while (fscanf(f, "%f", &currValue) != EOF)
    {
        if(currValue >= passPoint)
            passedCount++;
        totalCount++;
    }

    fprintf(stdout, "%.2f%%", ((float)passedCount/totalCount)*100);
}

int main()
{
    read_solve();

    return 0;
}
