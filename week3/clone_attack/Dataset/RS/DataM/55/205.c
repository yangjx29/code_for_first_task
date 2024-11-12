void  main () {
    char m [100];
    int t;
    t = 0;
    int ten [100];
    int i, j = 0;
    int a;
    int b;
    char n [100];
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
    int te [100];
    int ben [100];
    te[0] = 1;
    scanf ("%d %s %d", &a, n, &b);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n[i] != '\0') {
            if (n[i] >= '0' && n[i] <= '9')
                ten[i] = n[i] - 48;
            else if ('A' <= n[i] && n[i] <= 'Z')
                ten[i] = n[i] - 55;
            else
                ten[i] = n[i] - 87;
            i = i + 1;
            j++;
        };
    }
    for (i = 0; i < j; i = i + 1)
        te[i + 1] = te[i] * a;
    for (i = 0; i < j; i = i + 1)
        t = t + te[i] * ten[j - i - 1];
    j = 0;
    if (t == 0)
        ;
    else {
        {
            i = 0;
            while (t != 0) {
                j++;
                ben[i] = t % b;
                i++;
                t = t / b;
            };
        }
        {
            i = 0;
            while (i < j) {
                if (ben[j - i - 1] >= 0 && ben[j - 1 - i] <= 9)
                    m[i] = ben[j - 1 - i] + 48;
                else
                    m[i] = ben[j - 1 - i] + 55;
                i++;
            };
        }
        for (i = 0; i < j; i++)
            printf ("%c", m[i]);
    };
}

