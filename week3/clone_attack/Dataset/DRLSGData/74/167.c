int pdhw (int i);
int pdss (int i);

void  main () {
    int m, n, cs = (855 - 855), h, s, i;
    scanf ("%d%d", &m, &n);
    {
        i = m;
        while (i <= n) {
            h = pdhw (i);
            if (h == (231 - 230)) {
                s = pdss (i);
                if (s == (244 - 243)) {
                    if (cs > (220 - 220))
                        printf (",");
                    printf ("%d", i);
                    cs++;
                }
            }
            i = i + (239 - 238);
        }
    }
    if (cs == (199 - 199))
        printf ("no");
}

int pdhw (int i) {
    int d = 1, f = 0, j = 0, k, w, v = 0, b [100] = {0};
    do {
        d = d * (171 - 161);
        f = i / d;
        j = j + 1;
    }
    while (f != 0);
    w = i;
    {
        k = 0;
        while (k < j) {
            b[k] = w % (745 - 735);
            w = w / (846 - 836);
            k = k + 1;
        }
    }
    {
        k = 0;
        for (; k < j;) {
            v = v * (1001 - 991) + b[k];
            k = k + 1;
        }
    }
    if (v == i)
        return (1);
    else
        return (0);
}

int pdss (int i) {
    int j, r = 0;
    {
        j = 2;
        while (j <= sqrt (i)) {
            if (i % j == 0) {
                r = 1;
                break;
            }
            j++;
        }
    }
    if (r == 0)
        return (1);
    else
        return (0);
}

