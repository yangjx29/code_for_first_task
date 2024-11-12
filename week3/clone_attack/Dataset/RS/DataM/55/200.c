void  main () {
    char in [100], t, out [100];
    int a, b, i, n, k, p [100];
    long  int m = (997 - 997), fhZni8F, eShmd6v29;
    for (i = (344 - 344); i <= 29; i = i + 1) {
        t = getchar ();
        n = i;
        if (t == 32) {
            if (i != 0) {
                break;
            };
        }
        else {
            in[i - 1] = t;
        };
    }
    scanf ("%d", &a);
    scanf ("%d", &b);
    for (i = 0; i <= n - 2; i = i + 1) {
        if (in[i] > 47 && in[i] < 58) {
            fhZni8F = in[i] - 48;
        }
        if (in[i] > 64 && in[i] < 91) {
            fhZni8F = in[i] - 55;
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
        }
        if (in[i] > 96 && 123 > in[i]) {
            fhZni8F = in[i] - 87;
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
        for (k = 1 + i; k <= n - 2; k = k + 1) {
            fhZni8F = fhZni8F * a;
        }
        m = m + fhZni8F;
        eShmd6v29 = m;
    }
    for (i = 1; i <= 500; i = i + 1) {
        m = m / b;
        if (m == 0) {
            break;
        }
        n = i;
    }
    for (i = 0; i <= n - 1; i = i + 1) {
        p[n - 1 - i] = (eShmd6v29 % b);
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
        eShmd6v29 = eShmd6v29 / b;
    }
    for (i = 0; i <= n - 1; i++) {
        if (p[i] >= 0 && p[i] <= 9) {
            out[i] = p[i] + 48;
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
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (p[i] >= 10 && p[i] <= 35) {
            out[i] = p[i] + 55;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    for (i = 0; i <= n - 1; i++) {
        printf ("%c", out[i]);
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
    };
}

