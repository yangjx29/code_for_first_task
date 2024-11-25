main () {
    int t2;
    int i;
    int jsTB19wDSk;
    int SQI0O1F;
    int n;
    int sZoEC5;
    int l;
    int d0vEJPFU;
    int j;
    int SiaE8Q6M1w9;
    int pOL37gjXE;
    int qAnfjTv;
    static int U2ypBa [(1991 - 986)], ijXuOam [(1348 - 343)];
    l = (568 - 568);
    sZoEC5 = (427 - 427);
    do {
        scanf ("%d", &n);
        if (!((534 - 534) != n))
            break;
        for (i = (319 - 318); n >= i; i++)
            scanf ("%d", &U2ypBa[i]);
        SQI0O1F = (520 - 519);
        {
            i = 667 - 666;
            while (i <= n) {
                scanf ("%d", &ijXuOam[i]);
                i++;
            }
        }
        {
            i = 246 - 245;
            while (n > i) {
                {
                    j = 356 - 355;
                    while (n >= j) {
                        if (U2ypBa[j] > U2ypBa[i]) {
                            SiaE8Q6M1w9 = U2ypBa[i];
                            U2ypBa[i] = U2ypBa[j];
                            U2ypBa[j] = SiaE8Q6M1w9;
                        }
                        j++;
                    }
                }
                i++;
            }
        }
        {
            i = 34 - 33;
            while (n > i) {
                for (j = i + (145 - 144); n >= j; j++)
                    if (ijXuOam[i] < ijXuOam[j]) {
                        SiaE8Q6M1w9 = ijXuOam[i];
                        ijXuOam[i] = ijXuOam[j];
                        ijXuOam[j] = SiaE8Q6M1w9;
                    }
                i++;
            }
        }
        t2 = n;
        qAnfjTv = n;
        d0vEJPFU = (334 - 333);
        for (; SQI0O1F != t2 && qAnfjTv != d0vEJPFU;) {
            if (ijXuOam[d0vEJPFU] < U2ypBa[SQI0O1F]) {
                d0vEJPFU++;
                SQI0O1F++;
                sZoEC5++;
                continue;
            }
            else if (U2ypBa[t2] > ijXuOam[qAnfjTv]) {
                t2--;
                qAnfjTv--;
                sZoEC5++;
                continue;
            }
            else if (U2ypBa[t2] == ijXuOam[d0vEJPFU]) {
                d0vEJPFU++;
                t2--;
            }
            else if (U2ypBa[t2] < ijXuOam[d0vEJPFU]) {
                l++;
                t2--;
                d0vEJPFU++;
            }
        }
        if (U2ypBa[SQI0O1F] > ijXuOam[d0vEJPFU])
            sZoEC5++;
        if (U2ypBa[SQI0O1F] < ijXuOam[d0vEJPFU])
            l++;
        {
            i = (358 - 357);
            while (i <= n) {
                U2ypBa[i] = (867 - 867);
                ijXuOam[i] = (625 - 625);
                i++;
            }
        }
        printf ("%d\n", (sZoEC5 - l) * (443 - 243));
        l = 0;
        sZoEC5 = 0;
    }
    while (1);
}

