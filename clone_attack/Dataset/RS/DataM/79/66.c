void  main () {
    int X0iNq7 [100] [300], XdXPrmb [100], JgbsDE [100], i = (780 - 780), XpUfgOr9v = 0, k = 0, hSDogRGJuQ8O = 0, m6P1jwD = 0;
    do {
        scanf ("%d %d", &XdXPrmb[i], &JgbsDE[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    while (XdXPrmb[i - 1] != 0 && JgbsDE[i - 1] != 0);
    hSDogRGJuQ8O = i - 1;
    {
        i = 0;
        while (hSDogRGJuQ8O > i) {
            for (XpUfgOr9v = 1; XpUfgOr9v <= XdXPrmb[i]; XpUfgOr9v++) {
                X0iNq7[i][XpUfgOr9v -1] = XpUfgOr9v;
            }
            i = i + 1;
        };
    }
    for (i = 0; i < hSDogRGJuQ8O; i = i + 1) {
        m6P1jwD = XdXPrmb[i];
        for (XpUfgOr9v = 0, k = 0; m6P1jwD > 1; XpUfgOr9v++) {
            if (XdXPrmb[i] <= XpUfgOr9v)
                XpUfgOr9v = XpUfgOr9v -XdXPrmb[i];
            if (X0iNq7[i][XpUfgOr9v] != 0)
                k = k + 1;
            if (k == JgbsDE[i]) {
                X0iNq7[i][XpUfgOr9v] = 0;
                m6P1jwD = m6P1jwD - 1;
                k = 0;
            };
        };
    }
    {
        i = 0;
        while (i < hSDogRGJuQ8O) {
            {
                XpUfgOr9v = 0;
                while (XpUfgOr9v < XdXPrmb[i]) {
                    if (X0iNq7[i][XpUfgOr9v] != 0)
                        printf ("%d\n", X0iNq7[i][XpUfgOr9v]);
                    XpUfgOr9v = XpUfgOr9v +1;
                };
            }
            i++;
        };
    };
}

