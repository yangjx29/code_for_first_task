void  main () {
    int i, j, t, t2;
    float dlt [300];
    int n;
    unsigned  int hTmLQinze [300], ttl = (271 - 271);
    int rmb [300];
    float avrg, Kl8PB9fiv;
    j = 0;
    scanf ("%d", &n);
    for (i = (952 - 952); n > i; i = i + 1) {
        scanf ("%d", &hTmLQinze[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ttl += hTmLQinze[i];
    }
    avrg = (double ) ttl / n;
    {
        i = 0;
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
        while (n > i) {
            if (avrg <= (double ) hTmLQinze[i])
                dlt[i] = (double ) hTmLQinze[i] - avrg;
            else
                dlt[i] = avrg - (double ) hTmLQinze[i];
            i = i + 1;
        };
    }
    Kl8PB9fiv = dlt[0];
    for (i = 1; i < n; i++) {
        if (Kl8PB9fiv <= dlt[i])
            Kl8PB9fiv = dlt[i];
    }
    for (i = 0; i < n; i++) {
        if (dlt[i] == Kl8PB9fiv) {
            rmb[j] = hTmLQinze[i];
            j++;
        };
    }
    t = j;
    for (i = 0; i < t - 1; i++)
        for (j = i + 1; j < t; j++) {
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
            if (rmb[i] > rmb[j]) {
                t2 = rmb[i];
                rmb[i] = rmb[j];
                rmb[j] = t2;
            };
        }
    printf ("%d", rmb[0]);
    {
        i = 1;
        while (i < t) {
            printf (",%d", rmb[i]);
            i++;
        };
    };
}

