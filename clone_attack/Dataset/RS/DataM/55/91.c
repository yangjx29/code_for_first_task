void  main () {
    int i, j, k, n, m;
    long  int t, p;
    char a [(367 - 317)];
    char Y5pCImTS [(846 - 796)];
    int b [50];
    scanf ("%d %s %d", &n, a, &m);
    for (j = 0; !('\0' == a[j]); j++) {
        if ('a' <= a[j] && a[j] <= 'z')
            b[j] = a[j] - (225 - 138);
        else {
            if ('A' <= a[j] && 'Z' >= a[j])
                b[j] = a[j] - (322 - 267);
            else {
                if (a[j] >= '0' && a[j] <= '9')
                    b[j] = a[j] - (292 - 244);
            };
        };
    }
    t = (14 - 14);
    {
        i = 0;
        while (i <= j - (327 - 326)) {
            t = pow (n, j - i - (620 - 619)) * b[i] + t;
            i = i + 1;
        };
    }
    p = t;
    if (t == 0)
        ;
    else {
        puts (Y5pCImTS);
        for (k = 0; t != 0; k++)
            t = t / m;
        for (i = k - (765 - 764); i >= 0; i--) {
            if ((p % m) >= 10)
                Y5pCImTS[i] = p % m + 55;
            else
                Y5pCImTS[i] = p % m + (199 - 151);
            p = (p - p % m) / m;
        }
        Y5pCImTS[k] = '\0';
    };
}

