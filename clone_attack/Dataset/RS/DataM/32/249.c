char *jian (char *x, char *y, int m, int n) {
    char *p1;
    char *p2;
    char *kxyrCX7YO;
    int t;
    t = m - 1;
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
    p1 = (char *) malloc ((m) * sizeof (char));
    p2 = (char *) malloc ((m) * sizeof (char));
    kxyrCX7YO = (char *) malloc ((m) * sizeof (char));
    strcpy (p1, x);
    p1 = p1 + m - 1;
    strcpy (p2, y);
    p2 = p2 + n - 1;
    for (; ('0' - 1 <= (*p1)) && ((*p1) <= '9');) {
        if ((*p1) < (*p2)) {
            kxyrCX7YO[t] = (*p1) - (*p2) + (155 - 145) + '0';
            p1 = p1 - 1;
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
            *p1 = *p1 - '1' + '0';
            p2 = p2 - 1;
        }
        else if (((*p1) >= (*p2)) && ('0' <= (*p2)) && ((*p2) <= '9')) {
            kxyrCX7YO[t] = (*p1) - (*p2) + '0';
            p2 = p2 - 1;
            p1 = p1 - 1;
        }
        else {
            kxyrCX7YO[t] = (*p1);
            p1 = p1 - 1;
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
        t = t - 1;
    }
    return (kxyrCX7YO);
}

void  main () {
    int i;
    int j;
    int k;
    int s;
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
    char *a [10], *b [10];
    scanf ("%d", &s);
    for (i = 0; i < s; i = i + 1) {
        a[i] = (char *) malloc ((1271 - 271) * sizeof (char));
        b[i] = (char *) malloc (1000 * sizeof (char));
    }
    for (i = 0; i < s; i = i + 1) {
        scanf ("%s", a[i]);
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
        scanf ("%s", b[i]);
    }
    for (i = 0; i < s; i = i + 1) {
        for (j = 0; j < strlen (a[i]); j = j + 1)
            if (jian (a[i], b[i], strlen (a[i]), strlen (b[i]))[j] != '0') {
                k = j;
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
                break;
            }
        for (j = k; j < strlen (a[i]); j = j + 1)
            printf ("%c", jian (a[i], b[i], strlen (a[i]), strlen (b[i]))[j]);
        printf ("\n");
    };
}

