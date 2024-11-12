void  main () {
    int GTOD7kvVs, j, a [8] [8], mi, ma, p, q, x, TMlduzLHh;
    scanf ("%d,%d", &GTOD7kvVs, &j);
    for (p = 0; p < GTOD7kvVs; p = p + 1) {
        q = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (q < j) {
            scanf ("%d", &a[p][q]);
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
            q++;
        };
    }
    for (p = 0; p < GTOD7kvVs; p++) {
        {
            q = 0;
            while (q < j) {
                {
                    mi = q;
                    x = 0;
                    while (x < GTOD7kvVs) {
                        if (mi > a[x][q])
                            mi = a[x][q];
                        x++;
                    };
                }
                {
                    ma = q;
                    TMlduzLHh = 0;
                    while (TMlduzLHh < j) {
                        if (ma < a[p][TMlduzLHh])
                            ma = a[p][TMlduzLHh];
                        TMlduzLHh = TMlduzLHh +1;
                    };
                }
                if ((!(a[p][q] != mi)) && (ma == a[p][q]))
                    break;
                q++;
            };
        }
        if ((mi == a[p][q]) && (ma == a[p][q]))
            break;
    }
    if (mi == a[p][q] && ma == a[p][q])
        printf ("%d+%d", p, q);
    else
        ;
}

