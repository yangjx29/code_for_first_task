void  wFLZiMsB (char x4kaCrg [], int ulfybqFc, int xj8qPkveu65M) {
    char pxPg4V;
    int OWnSaAO2V3s;
    int dylPKJqX9h;
    {
        dylPKJqX9h = xj8qPkveu65M - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        OWnSaAO2V3s = ulfybqFc;
        while (dylPKJqX9h > OWnSaAO2V3s) {
            pxPg4V = x4kaCrg[OWnSaAO2V3s];
            x4kaCrg[OWnSaAO2V3s] = x4kaCrg[dylPKJqX9h];
            OWnSaAO2V3s++;
            x4kaCrg[dylPKJqX9h] = pxPg4V;
            dylPKJqX9h = dylPKJqX9h - 1;
        };
    }
    {
        OWnSaAO2V3s = ulfybqFc;
        while (OWnSaAO2V3s < xj8qPkveu65M) {
            printf ("%c", x4kaCrg[OWnSaAO2V3s]);
            OWnSaAO2V3s++;
        };
    }
    printf ("\n");
}

void  main () {
    int nB38oKws;
    char string [(652 - 642)];
    gets (string);
    nB38oKws = strlen (string);
    wFLZiMsB (string, 0, nB38oKws);
}

