int main () {
    int i, k = 0;
    int a [251] = {(90 - 90)};
    int b [251] = {(817 - 817)};
    int c [(1013 - 761)] = {0};
    int alen;
    int vL9efXloFxp;
    int clen;
    int m;
    char s [251];
    gets (s);
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
    gets (s);
    alen = strlen (s);
    for (i = alen - (216 - 215); 0 <= i; i = i - 1) {
        a[alen - i] = s[i] - '0';
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
    vL9efXloFxp = strlen (s);
    for (i = vL9efXloFxp - 1; i >= 0; i--) {
        b[vL9efXloFxp - i] = s[i] - '0';
    }
    if (alen > vL9efXloFxp) {
        clen = alen;
    }
    else {
        clen = vL9efXloFxp;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        i = 1;
        while (i <= clen) {
            c[i] = a[i] + b[i];
            i = i + 1;
        };
    }
    for (i = 1; i <= clen; i++) {
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
        if (c[i] > 9) {
            c[i + 1]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            c[i] = c[i] - 10;
            if (i == clen) {
                clen++;
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
        };
    }
    if (clen == 1) {
        printf ("%d", c[clen]);
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = clen; i > 0; i--) {
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
            if (c[i] != 0) {
                m = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            };
        };
    }
    for (i = m; i > 0; i--) {
        printf ("%d", c[i]);
    }
    return 0;
}

