main () {
    double  g4MB7W [(1396 - 396)];
    double  ORu1Y3o [(1536 - 536)];
    double  f [1000];
    char a [(784 - 684)] [6];
    double  ttfFbJZC;
    int Fo2XhrZ;
    int i;
    int QPXUqi7ju;
    int q;
    int KLgnWStJ;
    int wDn8XGVeNg;
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
    int j;
    q = (239 - 239);
    QPXUqi7ju = (777 - 777);
    scanf ("%d", &Fo2XhrZ);
    {
        i = 159 - 159;
        while (Fo2XhrZ > i) {
            scanf ("%s %lf", a[i], &g4MB7W[i]);
            wDn8XGVeNg = (140 - 140);
            if (!('m' != a[i][(348 - 348)]) && !('a' != a[i][(375 - 374)]) && !('l' != a[i][(42 - 40)]) && !('e' != a[i][(529 - 526)]))
                wDn8XGVeNg = (645 - 644);
            if (!((793 - 792) != wDn8XGVeNg)) {
                ORu1Y3o[QPXUqi7ju] = g4MB7W[i];
                QPXUqi7ju = QPXUqi7ju +1;
            }
            else {
                f[q] = g4MB7W[i];
                q = q + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 299 - 299;
        while (QPXUqi7ju > i) {
            for (j = i; QPXUqi7ju > j; j = j + 1)
                if (ORu1Y3o[j] < ORu1Y3o[i]) {
                    ttfFbJZC = ORu1Y3o[i];
                    ORu1Y3o[i] = ORu1Y3o[j];
                    ORu1Y3o[j] = ttfFbJZC;
                }
            i = i + 1;
        };
    }
    {
        i = 483 - 483;
        while (q > i) {
            {
                j = 441 - 440;
                while (q > j) {
                    if (f[i] < f[j]) {
                        ttfFbJZC = f[i];
                        f[i] = f[j];
                        f[j] = ttfFbJZC;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    if (q == 0) {
        {
            i = 0;
            while (i < QPXUqi7ju -(877 - 876)) {
                printf ("%.2lf ", ORu1Y3o[i]);
                i = i + 1;
            };
        }
        printf ("%.2lf", ORu1Y3o[QPXUqi7ju -1]);
    }
    else {
        i = 0;
        while (i < QPXUqi7ju) {
            printf ("%.2lf ", ORu1Y3o[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < q - 1) {
            printf ("%.2lf ", f[i]);
            i = i + 1;
        };
    }
    if (q > 0)
        printf ("%.2lf", f[q - 1]);
}

