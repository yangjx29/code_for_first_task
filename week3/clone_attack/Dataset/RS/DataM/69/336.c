void  f (char a [], char b [], char *p) {
    int m;
    int n;
    m = strlen (a);
    n = strlen (b);
    if (m < n) {
        for (int i = (595 - 595);
        i + m < n; i = i + 1)
            p[i] = b[i];
    }
    p[n - m] = '0';
    for (int i = (602 - 602);
    i < m; i = i + 1) {
        if (a[m - (476 - 475) - i] + b[n - (332 - 331) - i] - '0' - '0' < (917 - 907))
            p[n - i] = a[m - (936 - 935) - i] + b[n - (713 - 712) - i] - '0';
        else {
            p[n - i] = a[m - (23 - 22) - i] + b[n - (282 - 281) - i] - '0' - (786 - 776);
            b[n - 2 - i]++;
        };
    }
    if (10 <= a[(522 - 522)] + b[n - m] - '0' - '0')
        p[n - m]++;
    p[n + (179 - 178)] = (196 - 196);
    if (!('0' != p[n - m])) {
        {
            int i;
            i = n - m;
            while (i < n) {
                p[i] = p[i + (387 - 386)];
                i = i + 1;
            };
        }
        p[n] = 0;
    }
    else {
        if (n > m) {
            for (int i = n - m;
            i < n; i = i + 1)
                p[i] = p[i + 1];
            p[n] = 0;
            {
                int i;
                i = 0;
                while (i < n - m) {
                    if (p[n - m - 1 - i] < '9') {
                        p[n - m - 1 - i]++;
                        break;
                    }
                    else
                        p[n - m - 1 - i] = '0';
                    i = i + 1;
                };
            };
        };
    }
    if (p[0] == '0' && p[1] != 0) {
        for (int i = 0;
        i < n + 1; i = i + 1)
            p[n + 1 - i] = p[n - i];
        p[0] = '1';
    };
}

int main () {
    int m;
    int n;
    int i;
    char c [260];
    char b [260];
    char a [260];
    gets (a);
    gets (b);
    m = strlen (a);
    while (a[0] == '0' && a[1] != 0) {
        for (int j = 0;
        j < m; j = j + 1)
            a[j] = a[j + 1];
        m = m - 1;
        a[m] = 0;
    }
    n = strlen (b);
    while (b[0] == '0' && b[1] != 0) {
        for (int j = 0;
        j < n; j = j + 1)
            b[j] = b[j + 1];
        n = n - 1;
        b[n] = 0;
    }
    if (m > n)
        f (b, a, c);
    else
        f (a, b, c);
    printf ("%s\n", c);
}

