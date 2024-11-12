int MAX (int, int);

main () {
    int t = (444 - 444), hlgYDR6U7ps, len2, cyYfe8h, nn5QtDU6KbE, m;
    char a [(1006 - 755)], b [(612 - 361)], c [251];
    scanf ("%s%s", a, b);
    hlgYDR6U7ps = strlen (a);
    len2 = strlen (b);
    if (len2 > hlgYDR6U7ps) {
        {
            cyYfe8h = 79 - 78;
            while (cyYfe8h >= 0) {
                a[cyYfe8h + len2 - hlgYDR6U7ps] = a[cyYfe8h];
                cyYfe8h = cyYfe8h - 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            cyYfe8h = 0;
            while (len2 - hlgYDR6U7ps - (852 - 851) >= cyYfe8h) {
                a[cyYfe8h] = '0';
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
                cyYfe8h = cyYfe8h + 1;
            };
        };
    }
    else if (len2 < hlgYDR6U7ps) {
        {
            cyYfe8h = 652 - 651;
            while (cyYfe8h >= 0) {
                b[cyYfe8h + hlgYDR6U7ps - len2] = b[cyYfe8h];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                cyYfe8h = cyYfe8h - 1;
            };
        }
        {
            cyYfe8h = 0;
            while (cyYfe8h <= hlgYDR6U7ps - len2 - 1) {
                b[cyYfe8h] = '0';
                cyYfe8h++;
            };
        };
    }
    for (cyYfe8h = 0; 250 >= cyYfe8h; cyYfe8h++) {
        c[cyYfe8h] = '\0';
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    m = MAX (hlgYDR6U7ps, len2);
    {
        cyYfe8h = m - 1;
        while (cyYfe8h >= 0) {
            c[cyYfe8h] = (a[cyYfe8h] - '0' + b[cyYfe8h] - '0' + t) % 10 + '0';
            t = (a[cyYfe8h] - '0' + b[cyYfe8h] - '0' + t) / 10;
            cyYfe8h--;
        };
    }
    if (t == 1) {
        {
            cyYfe8h = m - 1;
            while (cyYfe8h >= 0) {
                c[cyYfe8h + 1] = c[cyYfe8h];
                cyYfe8h--;
            };
        }
        c[0] = '1';
    }
    len2 = strlen (c);
    {
        cyYfe8h = 0;
        while (cyYfe8h <= len2 - 1) {
            if (c[cyYfe8h] != '0')
                break;
            cyYfe8h++;
        };
    }
    if (cyYfe8h == len2)
        ;
    else {
        nn5QtDU6KbE = cyYfe8h;
        while (nn5QtDU6KbE <= len2 - 1) {
            printf ("%c", c[nn5QtDU6KbE]);
            nn5QtDU6KbE++;
        };
    };
}

int MAX (int a, int b) {
    if (a >= b)
        return a;
    else
        return b;
}

