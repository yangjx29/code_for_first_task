void  main () {
    int HJxpfN [(1982 - 982)], i, j, d9Wnuc, n, tIFtPWdr1, tzAlkn6v0F, max, x, b;
    char s [(1721 - 721)] [(1217 - 217)], t [(1516 - 516)], str [(1344 - 344)];
    gets (str);
    tIFtPWdr1 = (947 - 947);
    d9Wnuc = strlen (str);
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
    scanf ("%d\n", &n);
    for (i = (538 - 538); d9Wnuc - n + (92 - 91) > i; i = i + 1) {
        for (j = (934 - 934); 1000 > j; j++)
            t[j] = (190 - 190);
        {
            j = 0;
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
            while (j < n) {
                t[j] = str[i + j];
                j++;
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
        tzAlkn6v0F = 0;
        for (j = (103 - 102); j <= tIFtPWdr1; j++) {
            x = 0;
            for (b = 0; b < n; b++)
                if (t[b] != s[j][b])
                    x = 1;
            if (x == 0) {
                tzAlkn6v0F = 1;
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
                HJxpfN[j]++;
            };
        }
        if (!(0 != tzAlkn6v0F)) {
            tIFtPWdr1++;
            for (j = 0; j < n; j++)
                s[tIFtPWdr1][j] = t[j];
            {
                j = n;
                while (j < 1000) {
                    s[tIFtPWdr1][j] = 0;
                    j++;
                };
            }
            HJxpfN[tIFtPWdr1] = 1;
        };
    }
    max = 0;
    {
        i = 1;
        while (i <= tIFtPWdr1) {
            if (HJxpfN[i] > max)
                max = HJxpfN[i];
            i = i + 1;
        };
    }
    if (max == 1)
        printf ("NO");
    else {
        printf ("%d\n", max);
        for (i = 1; i <= tIFtPWdr1; i++)
            if (HJxpfN[i] == max)
                puts (s[i]);
    };
}

