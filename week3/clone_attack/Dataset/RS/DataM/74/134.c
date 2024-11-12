int f1 (int x) {
    int i;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            return (0);
    return (1);
}

int f2 (int x) {
    int jxM4XiAa5pOq [5] = {0}, i = 0, dfYz7C, lGraPQ;
    dfYz7C = x;
    while (dfYz7C != 0) {
        jxM4XiAa5pOq[i] = dfYz7C % 10;
        i++;
        dfYz7C /= 10;
    }
    {
        lGraPQ = 0;
        while (lGraPQ < i) {
            if (jxM4XiAa5pOq[lGraPQ] != jxM4XiAa5pOq[i - lGraPQ - 1])
                return (0);
            lGraPQ++;
        };
    }
    return (1);
}

main () {
    int i, lGraPQ, LslJ1mACrSI, n, e = 0;
    scanf ("%d%d", &LslJ1mACrSI, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    {
        i = LslJ1mACrSI;
        while (i <= n) {
            if (f1 (i) == 1 && f2 (i) == 1) {
                if (e == 0) {
                    e++;
                    printf ("%d", i);
                }
                else
                    printf (",%d", i);
            }
            i++;
        };
    }
    if (e == 0)
        printf ("no");
}

