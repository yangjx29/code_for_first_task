void  main () {
    long  nZgEuVnlH3;
    long  i;
    long  t;
    long  n;
    char str1 [LENGTH +(450 - 449)], str2 [LENGTH +(658 - 657)], ln [LENGTH +1];
    int a [LENGTH +1], qXIMfeHaxB [LENGTH +1], len1, FFKSdo8btH9;
    scanf ("%d\n", &n);
    for (nZgEuVnlH3 = 1; nZgEuVnlH3 <= n; nZgEuVnlH3 = nZgEuVnlH3 + 1) {
        gets (str1);
        gets (str2);
        t = 0;
        {
            i = 627 - 627;
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
            while (i <= LENGTH) {
                a[i] = (945 - 945);
                qXIMfeHaxB[i] = (237 - 237);
                i = i + 1;
            };
        }
        if (nZgEuVnlH3 < n)
            gets (ln);
        len1 = strlen (str1);
        for (i = (717 - 717); i < len1; i = i + 1)
            a[LENGTH -i] = str1[len1 - i - 1] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        FFKSdo8btH9 = strlen (str2);
        {
            i = 0;
            while (i < FFKSdo8btH9) {
                qXIMfeHaxB[LENGTH -i] = str2[FFKSdo8btH9 -i - 1] - '0';
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i <= LENGTH) {
                a[i] = a[i] - qXIMfeHaxB[i];
                i++;
            };
        }
        for (i = LENGTH; i > 0; i--) {
            if (a[i] < 0) {
                a[i] = a[i] + (224 - 214);
                a[i - 1]--;
            };
        }
        while (a[t] == 0)
            t++;
        for (i = t; i <= LENGTH; i++)
            printf ("%d", a[i]);
        if (nZgEuVnlH3 < n)
            ;
    };
}

