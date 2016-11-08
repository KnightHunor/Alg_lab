/* Nev: Laszlo Hunor
 * Csoport: 611
 * Azonosito: lzam0169
 */

/* Irjunk algorimust, amely megadja a Fibonacci-sorozat egy adott szamnal kissebb elememeinke a szamat */

#include <stdio.h>

int fibo_db(int num)
{
    int f1, f2, f3, db;

    db = 0;

    f1 = 0; /* 0-tol szamoltam */
    f2 = 1;
    while (f1 < num)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;

        db++;
    }

    return db;
}

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    printf("%d\n", fibo_db(n));

    return 0;
}
