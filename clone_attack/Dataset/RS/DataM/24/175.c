int main () {
    int imin;
    int hVQla3P1JpT6;
    int fuyBWQSrj;
    fuyBWQSrj = 30;
    char a [50] [30];
    int Vzrc874hKiL;
    int i;
    Vzrc874hKiL = 0;
    i = 0;
    int pAqtNzQ [50];
    int asuPGF9JbZ;
    asuPGF9JbZ = 0;
    while (0 < scanf ("%s", &a[i]) && strlen (a[i]) > 0) {
        Vzrc874hKiL = Vzrc874hKiL +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
    }
    {
        i = 0;
        while (i < Vzrc874hKiL) {
            pAqtNzQ[i] = strlen (a[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < Vzrc874hKiL) {
            if (pAqtNzQ[i] < fuyBWQSrj) {
                fuyBWQSrj = pAqtNzQ[i];
                imin = i;
            }
            if (pAqtNzQ[i] > asuPGF9JbZ) {
                asuPGF9JbZ = pAqtNzQ[i];
                hVQla3P1JpT6 = i;
            }
            i++;
        };
    }
    printf ("%s\n", a[hVQla3P1JpT6]);
    printf ("%s\n", a[imin]);
    return 0;
}

