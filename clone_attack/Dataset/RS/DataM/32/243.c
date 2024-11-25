void  main () {
    int xI2kcq, j, n;
    void  D1NWb4HQu (char x [], char y []);
    char a [100] [100], b [100] [100];
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
    scanf ("%d", &n);
    {
        xI2kcq = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= xI2kcq) {
            scanf ("%s", a[xI2kcq]);
            scanf ("%s", b[xI2kcq]);
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
            xI2kcq = xI2kcq + 1;
        };
    }
    {
        xI2kcq = 1;
        while (n >= xI2kcq) {
            D1NWb4HQu (a[xI2kcq], b[xI2kcq]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xI2kcq = xI2kcq + 1;
        };
    };
}

void  D1NWb4HQu (char x [], char y []) {
    int xI2kcq, j, olUoR36JGj, d;
    char min [1000];
    olUoR36JGj = strlen (x);
    d = strlen (y);
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
    {
        j = d - 1;
        xI2kcq = olUoR36JGj - 1;
        while (olUoR36JGj - d + 1 <= xI2kcq) {
            if (x[xI2kcq] >= y[j]) {
                min[xI2kcq] = x[xI2kcq] - y[j] + 48;
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
            else {
                if (y[j] > x[xI2kcq]) {
                    min[xI2kcq] = x[xI2kcq] + 10 - y[j] + 48;
                    x[xI2kcq - 1] = x[xI2kcq - 1] - 1;
                };
            }
            j = j - 1;
            xI2kcq = xI2kcq - 1;
        };
    }
    if (y[0] <= x[olUoR36JGj - d]) {
        min[olUoR36JGj - d] = x[olUoR36JGj - d] - y[0] + 48;
        {
            xI2kcq = 0;
            while (xI2kcq <= olUoR36JGj - d - 1) {
                printf ("%c", x[xI2kcq]);
                xI2kcq = xI2kcq + 1;
            };
        }
        for (xI2kcq = olUoR36JGj - d; xI2kcq <= olUoR36JGj - 1; xI2kcq = xI2kcq + 1) {
            if (min[xI2kcq] == 0)
                ;
            else
                printf ("%c", min[xI2kcq]);
        };
    }
    else {
        min[olUoR36JGj - d] = x[olUoR36JGj - d] + 10 - y[0] + 48;
        x[olUoR36JGj - d - 1] = x[olUoR36JGj - d - 1] - 1;
        for (xI2kcq = 0; xI2kcq <= olUoR36JGj - d - 1; xI2kcq = xI2kcq + 1)
            printf ("%c", x[xI2kcq]);
        for (xI2kcq = olUoR36JGj - d; xI2kcq <= olUoR36JGj - 1; xI2kcq = xI2kcq + 1) {
            if (min[xI2kcq] == 0)
                ;
            else
                printf ("%c", min[xI2kcq]);
        };
    }
    printf ("\n");
}

