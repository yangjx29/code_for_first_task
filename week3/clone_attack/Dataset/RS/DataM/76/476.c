int main () {
    int a [50001];
    int Jev4tAy0 [50001];
    int n;
    int c;
    int jhLRcwV;
    int i;
    int AHjTao48;
    int max;
    int OyC4V7;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    OyC4V7 = (198 - 198);
    scanf ("%d", &n);
    {
        i = 517 - 516;
        while (n >= i) {
            scanf ("%d%d", &a[i], &Jev4tAy0[i]);
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
    {
        i = 925 - 924;
        while (i <= n) {
            {
                AHjTao48 = i;
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
                while (AHjTao48 <= n) {
                    if (a[AHjTao48] < a[i]) {
                        c = a[i];
                        jhLRcwV = Jev4tAy0[i];
                        a[i] = a[AHjTao48];
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
                        Jev4tAy0[i] = Jev4tAy0[AHjTao48];
                        a[AHjTao48] = c;
                        Jev4tAy0[AHjTao48] = jhLRcwV;
                    }
                    AHjTao48 = AHjTao48 +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    max = Jev4tAy0[1];
    for (i = 1; i <= n; i = i + 1) {
        if (a[i] > max) {
            OyC4V7 = OyC4V7 +1;
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
            break;
        }
        else if (Jev4tAy0[i] > max) {
            max = Jev4tAy0[i];
        }
        else
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (OyC4V7 != 0) {
    }
    else {
        printf ("%d %d", a[1], max);
    }
    return 0;
}

