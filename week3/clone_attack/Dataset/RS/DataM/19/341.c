void  main () {
    char s [300];
    char Dbd0S4 [103];
    char b [103];
    gets (s);
    gets (Dbd0S4);
    gets (b);
    int h;
    int i;
    int j;
    int k;
    int p;
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
    int l;
    int m;
    int n;
    int num;
    h = 0;
    l = strlen (s);
    m = strlen (Dbd0S4);
    n = strlen (b);
    for (i = 0; l > i; i++) {
        num = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(Dbd0S4[0] != s[i])) {
            num = 1;
            for (j = 1; !('\0' == Dbd0S4[j]); j++)
                if (!(Dbd0S4[j] != s[i + j]))
                    num++;
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
            if (!(m != num) && (!(' ' != s[i + j]) || !('\0' != s[i + j])) && m <= n) {
                if (!(0 != i) || (i != 0 && !(' ' != s[i - 1]))) {
                    for (k = 0; (l - m - i) > k; k = k + 1)
                        s[l - 1 + n - m - k] = s[l - 1 - k];
                    {
                        p = 0;
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
                        while (p < n) {
                            s[p + i] = b[p];
                            p++;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    s[l + n - m] = '\0';
                    i = i + n - 1;
                };
            }
            else if (num == m && (s[i + j] == ' ' || s[i + j] == '\0') && n < m) {
                if (i == 0 || (i != 0 && s[i - 1] == ' ')) {
                    {
                        k = 0;
                        while (k < (l - m - i)) {
                            s[n + i + k] = s[m + i + k];
                            k++;
                        };
                    }
                    for (p = 0; p < n; p = p + 1)
                        s[p + i] = b[p];
                    s[l + n - m] = '\0';
                    i = i + n - 1;
                };
            }
            l = l + i;
        };
    }
    printf ("%s", s);
}

