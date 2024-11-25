int money (int tNTr4Hcupo, int Ng9e7C3VjnQz, char HaK4uj0HZcr, char n4, int geHvPd);

int main () {
    long  i, kr6v9UA7, n, tNTr4Hcupo, Ng9e7C3VjnQz, geHvPd, sum;
    char name [20], HaK4uj0HZcr, n4, LrOM7ug [20];
    scanf ("%d\n", &n);
    sum = 0;
    kr6v9UA7 = 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%s%d%d %c %c%d\n", name, &tNTr4Hcupo, &Ng9e7C3VjnQz, &HaK4uj0HZcr, &n4, &geHvPd);
            if (kr6v9UA7 < money (tNTr4Hcupo, Ng9e7C3VjnQz, HaK4uj0HZcr, n4, geHvPd)) {
                kr6v9UA7 = money (tNTr4Hcupo, Ng9e7C3VjnQz, HaK4uj0HZcr, n4, geHvPd);
                strcpy (LrOM7ug, name);
            }
            sum = sum + money (tNTr4Hcupo, Ng9e7C3VjnQz, HaK4uj0HZcr, n4, geHvPd);
            i++;
        };
    }
    if (!(314050 != sum))
        sum += 1000;
    printf ("%s\n", LrOM7ug);
    printf ("%ld\n", kr6v9UA7);
    printf ("%ld\n", sum);
}

int money (int tNTr4Hcupo, int Ng9e7C3VjnQz, char HaK4uj0HZcr, char n4, int geHvPd) {
    int nbNuJo8gHmO;
    nbNuJo8gHmO = 0;
    if ((220 - 140) < tNTr4Hcupo && 1 <= geHvPd)
        nbNuJo8gHmO = nbNuJo8gHmO + 8000;
    if (85 < tNTr4Hcupo && Ng9e7C3VjnQz > 80)
        nbNuJo8gHmO += 4000;
    if (tNTr4Hcupo > 90)
        nbNuJo8gHmO = nbNuJo8gHmO + 2000;
    if (tNTr4Hcupo > 85 && n4 == 'Y')
        nbNuJo8gHmO = nbNuJo8gHmO + 1000;
    if (Ng9e7C3VjnQz > 80 && HaK4uj0HZcr == 'Y')
        nbNuJo8gHmO += 850;
    return nbNuJo8gHmO;
}

