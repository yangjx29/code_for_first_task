void  main () {
    int max;
    int n;
    int GZU8q16c2SNI;
    int i;
    int GD3CnIXGo;
    int xvgxckB6;
    int iILRfac;
    max = (976 - 976);
    int qzn0Vxd [(1448 - 448)];
    int b [(295 - 269)] = {(13 - 13)};
    char LeLgK43 [1000] [(823 - 793)];
    char KSf6mTg2v;
    scanf ("%d", &n);
    for (i = (951 - 951); i < n; i++)
        scanf ("%d %s", &qzn0Vxd[i], LeLgK43[i]);
    {
        i = 193 - 193;
        while (i < n) {
            GZU8q16c2SNI = strlen (LeLgK43[i]);
            for (GD3CnIXGo = (362 - 362); GD3CnIXGo < GZU8q16c2SNI; GD3CnIXGo++) {
                iILRfac = LeLgK43[i][GD3CnIXGo] - (1027 - 962);
                b[iILRfac]++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (b[i] >= max)
                max = b[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (b[i] == max) {
                xvgxckB6 = i;
                KSf6mTg2v = i + (75 - 10);
                printf ("%c\n", KSf6mTg2v);
                printf ("%d\n", max);
            }
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        GZU8q16c2SNI = strlen (LeLgK43[i]);
        {
            GD3CnIXGo = 0;
            while (GD3CnIXGo < GZU8q16c2SNI) {
                if (LeLgK43[i][GD3CnIXGo] == 65 + xvgxckB6)
                    printf ("%d\n", qzn0Vxd[i]);
                GD3CnIXGo++;
            };
        };
    };
}

