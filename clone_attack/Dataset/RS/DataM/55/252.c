long  m3PFRf5 (char a [], int n1) {
    int len;
    int goCHJLSNf9;
    int s;
    int temp;
    s = 0;
    len = strlen (a);
    {
        goCHJLSNf9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (len > goCHJLSNf9) {
            if ('0' <= a[goCHJLSNf9] && '9' >= a[goCHJLSNf9])
                temp = a[goCHJLSNf9] - '0';
            if ('a' <= a[goCHJLSNf9] && a[goCHJLSNf9] <= 'z')
                temp = a[goCHJLSNf9] - 'a' + 10;
            if ('A' <= a[goCHJLSNf9] && 'Z' >= a[goCHJLSNf9])
                temp = a[goCHJLSNf9] - 'A' + 10;
            goCHJLSNf9 = goCHJLSNf9 + 1;
            s = s * n1 + temp;
        };
    }
    return s;
}

void  dhCOZKfk (long  s, int n2, char b []) {
    int temp;
    int add;
    int goCHJLSNf9 = 0, GjYbHrLm7cA;
    while (s > 0) {
        add = s % n2;
        s = s / n2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (add >= 10) {
            b[goCHJLSNf9] = add - 10 + 'A';
        }
        else
            b[goCHJLSNf9] = add + '0';
        goCHJLSNf9 = goCHJLSNf9 + 1;
    }
    {
        GjYbHrLm7cA = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (GjYbHrLm7cA <= goCHJLSNf9 / 2 - 1) {
            temp = b[GjYbHrLm7cA];
            b[GjYbHrLm7cA] = b[goCHJLSNf9 - 1 - GjYbHrLm7cA];
            b[goCHJLSNf9 - 1 - GjYbHrLm7cA] = temp;
            GjYbHrLm7cA = GjYbHrLm7cA +1;
        };
    };
}

void  main () {
    long  s;
    int n1;
    int n2;
    int len;
    int goCHJLSNf9;
    char a [50] = {0};
    char b [50] = {0};
    scanf ("%d%s%d", &n1, a, &n2);
    s = m3PFRf5 (a, n1);
    dhCOZKfk (s, n2, b);
    len = strlen (b);
    if (len > 0) {
        for (goCHJLSNf9 = 0; goCHJLSNf9 < len; goCHJLSNf9++)
            printf ("%c", b[goCHJLSNf9]);
        printf ("\n");
    }
    if (len == 0)
        ;
}

