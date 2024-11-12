void  main () {
    int i, p6elTsk, aZAqGgeN, n, l2m5sKS = 0, paBM9hlm7ZuG, w;
    double  fEA3yD8M1sl [10] [10] = {0};
    double  nafQH6;
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
    scanf ("%d,%d", &aZAqGgeN, &n);
    for (i = 0; aZAqGgeN > i; i = i + 1)
        for (p6elTsk = 0; n > p6elTsk; p6elTsk = p6elTsk + 1)
            scanf ("%lf", &fEA3yD8M1sl[i][p6elTsk]);
    {
        i = 0;
        while (aZAqGgeN > i) {
            nafQH6 = fEA3yD8M1sl[i][0];
            paBM9hlm7ZuG = 0;
            {
                p6elTsk = 0;
                while (n > p6elTsk) {
                    if (fEA3yD8M1sl[i][p6elTsk] > nafQH6) {
                        nafQH6 = fEA3yD8M1sl[i][p6elTsk];
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
                        paBM9hlm7ZuG = p6elTsk;
                    }
                    p6elTsk++;
                };
            }
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
            }
            for (w = 0; w < aZAqGgeN; w = w + 1) {
                if (w == i)
                    continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (fEA3yD8M1sl[w][paBM9hlm7ZuG] < nafQH6)
                    break;
                if (w == aZAqGgeN - 1) {
                    l2m5sKS = l2m5sKS + 1;
                    printf ("%d+%d", i, paBM9hlm7ZuG);
                    break;
                };
            }
            if (l2m5sKS == 1) {
                break;
            }
            i = i + 1;
        };
    }
    if (l2m5sKS == 0)
        ;
}

