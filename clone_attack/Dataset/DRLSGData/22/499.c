void  main () {
    char f [5];
    int a, b, c, d, e = 1, m, n, i, j, t [300] = {0};
    char s [1505];
    gets (s);
    char g;
    char h;
    b = 0;
    c = strlen (s);
    d = 0;
    for (i = 0; c >= i; i = i + 1)
        if (!(',' != s[i]) || !('\0' != s[i])) {
            d++;
            b = b + 1;
        }
        else {
            t[d] = t[d] * 10 + s[i] - '0';
        }
    if (!(1 != d))
        ;
    else {
        j = t[0];
        for (a = 1; a < d; a = a + 1)
            if (t[a] >= j) {
                e = e + 1;
                j = t[a];
            }
        if (!(d != e))
            ;
        else {
            m = 0;
            for (a = 0; a < d; a++) {
                if (t[a] > m && j > t[a])
                    m = t[a];
            }
            printf ("%d", m);
        }
    }
}

