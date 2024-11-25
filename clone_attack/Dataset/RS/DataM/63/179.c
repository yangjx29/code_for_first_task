main () {
    int U6T3yHuctaNf [100] [100] = {(358 - 358)};
    int lDTPQHZ [100] [100] = {0};
    int Xrf0WXv7o3AI [100] [100] = {0};
    int i;
    int Cgdtb0UkRI;
    int q;
    int w7nbT4i;
    int L5SF2QOb;
    int Oo7OgySPse;
    int FAuS8mW;
    int v;
    int Db0WgGsdr;
    int hev5PAQ;
    int FJGp8q;
    int uRUtrukM3;
    scanf ("%d %d", &hev5PAQ, &FJGp8q);
    for (w7nbT4i = 0; hev5PAQ > w7nbT4i; w7nbT4i++) {
        for (L5SF2QOb = 0; FJGp8q > L5SF2QOb; L5SF2QOb++)
            scanf ("%d", &U6T3yHuctaNf[w7nbT4i][L5SF2QOb]);
    }
    scanf ("%d %d", &FJGp8q, &uRUtrukM3);
    for (Oo7OgySPse = 0; FJGp8q > Oo7OgySPse; Oo7OgySPse++) {
        for (FAuS8mW = 0; FAuS8mW < uRUtrukM3; FAuS8mW = FAuS8mW +1)
            scanf ("%d", &lDTPQHZ[Oo7OgySPse][FAuS8mW]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    }
    for (i = 0; hev5PAQ > i; i = i + 1) {
        Cgdtb0UkRI = 0;
        while (uRUtrukM3 > Cgdtb0UkRI) {
            for (q = 0; FJGp8q > q; q++)
                Xrf0WXv7o3AI[i][Cgdtb0UkRI] = Xrf0WXv7o3AI[i][Cgdtb0UkRI] + U6T3yHuctaNf[i][q] * lDTPQHZ[q][Cgdtb0UkRI];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Cgdtb0UkRI++;
        };
    }
    for (v = 0; hev5PAQ > v; v++) {
        for (Db0WgGsdr = 0; uRUtrukM3 - 1 > Db0WgGsdr; Db0WgGsdr++)
            printf ("%d ", Xrf0WXv7o3AI[v][Db0WgGsdr]);
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
        if (Db0WgGsdr == uRUtrukM3 - 1)
            printf ("%d\n", Xrf0WXv7o3AI[v][Db0WgGsdr]);
    };
}

