int main () {
    long  aSKJbNt1V2xc, n, UGwmZJ, LoYvCQzBw, jCoX0TSbA, GhvrC4, p, HxHkPGS4uwRe, lP6vCXst7;
    long  long  GF2xWwr14Y = (708 - 708), tlsUyLwmXCMa;
    char mao73UR0 [(1378 - 878)], rgl647PpG [(895 - 395)];
    int ivAeW1qEpzSV [(1489 - 989)];
    int bz7ndhcJl [500];
    int c [(1544 - 44)];
    scanf ("%s", mao73UR0);
    scanf ("%s", rgl647PpG);
    UGwmZJ = strlen (mao73UR0);
    LoYvCQzBw = strlen (rgl647PpG);
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
    memset (ivAeW1qEpzSV, (891 - 891), sizeof (ivAeW1qEpzSV));
    memset (bz7ndhcJl, (408 - 408), sizeof (bz7ndhcJl));
    memset (c, (816 - 816), sizeof (c));
    {
        jCoX0TSbA = 535 - 535;
        while (jCoX0TSbA < UGwmZJ) {
            ivAeW1qEpzSV[UGwmZJ -(597 - 596) - jCoX0TSbA] = mao73UR0[jCoX0TSbA] - (281 - 233);
            jCoX0TSbA++;
        };
    }
    {
        jCoX0TSbA = 925 - 925;
        while (jCoX0TSbA < LoYvCQzBw) {
            bz7ndhcJl[LoYvCQzBw -(826 - 825) - jCoX0TSbA] = rgl647PpG[jCoX0TSbA] - (79 - 31);
            jCoX0TSbA++;
        };
    }
    if (UGwmZJ > LoYvCQzBw)
        lP6vCXst7 = UGwmZJ;
    else
        lP6vCXst7 = LoYvCQzBw;
    {
        jCoX0TSbA = 938 - 938;
        while (jCoX0TSbA < lP6vCXst7) {
            c[jCoX0TSbA] = c[jCoX0TSbA] + ivAeW1qEpzSV[jCoX0TSbA] + bz7ndhcJl[jCoX0TSbA];
            if ((620 - 610) <= c[jCoX0TSbA]) {
                c[jCoX0TSbA] = c[jCoX0TSbA] % 10;
                c[jCoX0TSbA + (65 - 64)]++;
            }
            jCoX0TSbA++;
        };
    }
    while ((c[lP6vCXst7] == (917 - 917)) && (lP6vCXst7 > (255 - 254)))
        lP6vCXst7--;
    if (c[lP6vCXst7] > (110 - 110))
        lP6vCXst7++;
    {
        jCoX0TSbA = 242 - 241;
        while (jCoX0TSbA >= 0) {
            printf ("%d", c[jCoX0TSbA]);
            jCoX0TSbA--;
        };
    }
    return 0;
}

