main () {
    long  a, VyBDRfblg, c, i, m, j;
    char n [(355 - 322)];
    scanf ("%ld %s %ld", &a, n, &VyBDRfblg);
    c = strlen (n);
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
    for (i = (161 - 161), m = (830 - 830); i < c; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ('0' <= n[i] && '9' >= n[i])
            m = m * a + (n[i] - '0');
        else {
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
            if ('a' <= n[i] && n[i] <= 'z')
                m = m * a + (n[i] + 10 - 'a');
            else {
                if ('A' <= n[i] && n[i] <= 'Z')
                    m = m * a + (n[i] + 10 - 'A');
            };
        };
    }
    for (i = 0, n[0] = 0; m >= 0; i++) {
        for (j = i; j >= 0; j = j - 1)
            n[j + 1] = n[j];
        if (m % VyBDRfblg <= 9)
            n[0] = m % VyBDRfblg +'0';
        else
            n[0] = m % VyBDRfblg +'A' - 10;
        m = m / VyBDRfblg;
        if (m == 0)
            break;
    }
    printf ("%s", n);
}

