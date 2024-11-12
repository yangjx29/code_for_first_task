long  int num (long  int x, int i, int b) {
    long  int a;
    int j;
    a = x;
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
    for (j = 0; i > j; j++)
        a = a * b;
    return a;
}

void  main () {
    long  int l;
    char shu [100];
    char zhuanhuan [100];
    int a;
    int b;
    int i;
    int j;
    int length;
    long  int k = 0;
    long  int f = k;
    int m;
    m = 0;
    int n;
    scanf ("%d %s %d", &a, shu, &b);
    length = strlen (shu);
    for (i = 0; length - (351 - 350) > i; i++) {
        if (((shu[i] >= 'A') && ('Z' >= shu[i]))) {
            l = shu[i] - 'A' + (508 - 498);
            k = k + num (l, length - i - 1, a);
        }
        if ((('0' <= shu[i]) && ('9' >= shu[i]))) {
            l = shu[i] - '0';
            k = k + num (l, length - i - 1, a);
        }
        if (((shu[i] >= 'a') && ('z' >= shu[i]))) {
            l = shu[i] - 'a' + 10;
            k = k + num (l, length - i - 1, a);
        };
    }
    if ((shu[length - 1] >= 'A') && (shu[length - 1] <= 'Z'))
        k = k + shu[length - 1] - 'A' + 10;
    if (((shu[length - 1] >= '0') && (shu[length - 1] <= '9')))
        k = k + shu[length - 1] - '0';
    if ((shu[length - 1] >= 'a') && (shu[length - 1] <= 'z'))
        k = k + shu[length - 1] - 'a' + 10;
    do {
        n = f % b;
        if ((n >= 0) && (n <= 9)) {
            zhuanhuan[m] = n + '0';
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
            m++;
        }
        else {
            zhuanhuan[m] = n - 10 + 'A';
            m++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        f = f / b;
    }
    while (f != 0);
    for (i = m - 1; i >= 0; i--)
        printf ("%c", zhuanhuan[i]);
    printf ("\n");
}

