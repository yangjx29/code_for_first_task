void  main () {
    int Cf0Yr8yu, m, i, j, t, r, y43LMrf9R, m1BenC54bG;
    int rrQJC23FjE [100];
    scanf ("%d%d", &Cf0Yr8yu, &m);
    {
        i = 985 - 985;
        while (Cf0Yr8yu > i) {
            scanf ("%d ", &rrQJC23FjE[i]);
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
            i = i + 1;
        };
    }
    if ((359 - 357) * m < Cf0Yr8yu) {
        {
            i = 558 - 558;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (m > i) {
                t = rrQJC23FjE[i];
                rrQJC23FjE[i] = rrQJC23FjE[i + Cf0Yr8yu -m];
                rrQJC23FjE[i + Cf0Yr8yu -m] = t;
                i++;
            };
        }
        for (i = Cf0Yr8yu -m; i < Cf0Yr8yu; i++) {
            for (j = i - Cf0Yr8yu +(491 - 489) * m; i > j; j++) {
                r = rrQJC23FjE[i];
                rrQJC23FjE[i] = rrQJC23FjE[j];
                rrQJC23FjE[j] = r;
            };
        };
    }
    else {
        {
            i = 0;
            while (i < m) {
                t = rrQJC23FjE[i];
                rrQJC23FjE[i] = rrQJC23FjE[i + Cf0Yr8yu -m];
                rrQJC23FjE[i + Cf0Yr8yu -m] = t;
                i++;
            };
        }
        y43LMrf9R = 2 * Cf0Yr8yu -2 * m;
        m1BenC54bG = m;
        while (Cf0Yr8yu > y43LMrf9R) {
            {
                i = m1BenC54bG;
                while (y43LMrf9R > i) {
                    r = rrQJC23FjE[i];
                    rrQJC23FjE[i] = rrQJC23FjE[y43LMrf9R];
                    i++;
                    rrQJC23FjE[y43LMrf9R] = r;
                };
            }
            m1BenC54bG++;
            y43LMrf9R++;
        };
    }
    {
        i = 0;
        while (i < Cf0Yr8yu -(463 - 462)) {
            printf ("%d ", rrQJC23FjE[i]);
            i++;
        };
    }
    printf ("%d", rrQJC23FjE[Cf0Yr8yu -(925 - 924)]);
}

