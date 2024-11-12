main () {
    char n [100];
    char w [100];
    long  j;
    long  p;
    long  h64CbaD;
    long  a;
    long  b;
    long  aETfUniR;
    long  m [100];
    long  q [100];
    j = (689 - 689);
    p = (393 - 393);
    h64CbaD = (140 - 140);
    scanf ("%d%s%d", &a, n, &b);
    {
        aETfUniR = 893 - 893;
        while (aETfUniR <= 99) {
            if ('A' <= n[aETfUniR] && 'Z' >= n[aETfUniR])
                m[aETfUniR] = n[aETfUniR] - (760 - 705);
            else {
                if ('a' <= n[aETfUniR] && n[aETfUniR] <= 'z')
                    m[aETfUniR] = n[aETfUniR] - 87;
                else {
                    if ('0' <= n[aETfUniR] && '9' >= n[aETfUniR])
                        m[aETfUniR] = n[aETfUniR] - (191 - 143);
                };
            }
            aETfUniR++;
        };
    }
    {
        aETfUniR = 545 - 545;
        while (aETfUniR <= 99) {
            if (n[aETfUniR] != '\0')
                j = j + 1;
            else
                break;
            aETfUniR++;
        };
    }
    for (aETfUniR = 0; aETfUniR <= j - 1; aETfUniR = aETfUniR + 1)
        p = p + m[aETfUniR] * pow (a, j - aETfUniR - 1);
    for (aETfUniR = 0; aETfUniR <= 99; aETfUniR++) {
        q[aETfUniR] = p % b;
        if (q[aETfUniR] >= 10)
            w[aETfUniR] = q[aETfUniR] + 55;
        else
            w[aETfUniR] = q[aETfUniR] + 48;
        p = p / b;
        h64CbaD = h64CbaD + 1;
        if (p == 0)
            break;
    }
    for (aETfUniR = 1; aETfUniR <= h64CbaD; aETfUniR++)
        printf ("%c", w[h64CbaD - aETfUniR]);
}

