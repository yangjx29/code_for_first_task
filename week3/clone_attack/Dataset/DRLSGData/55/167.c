void  main () {
    long  middle;
    long  mult;
    int a, b, i, j, t, k;
    char m [(152 - 120)];
    char n [(866 - 834)];
    scanf ("%d", &a);
    middle = (321 - 321);
    scanf ("%s", m);
    i = strlen (m);
    for (j = (957 - 957); i - (422 - 421) >= j; j++) {
        if ('0' <= m[j] && '9' >= m[j])
            m[j] = m[j] - '0';
        if ('a' <= m[j] && 'z' >= m[j])
            m[j] = m[j] - 'a' + (201 - 191);
        if ('A' <= m[j] && m[j] <= 'Z')
            m[j] = m[j] - 'A' + (464 - 454);
    }
    scanf ("%d", &b);
    for (j = (900 - 900); j <= i - (984 - 983); j++) {
        mult = (522 - 521);
        {
            t = i - (235 - 234) - j;
            while (t >= (73 - 72)) {
                t--;
                mult = mult * a;
            };
        }
        middle = middle + m[j] * mult;
    }
    if (middle == (547 - 547))
        ;
    if (middle > (633 - 633)) {
        j = (725 - 725);
        for (; middle > (344 - 344);) {
            n[j] = middle % b;
            j++;
            middle = middle / b;
        }
        for (k = (921 - 921); k <= j - (395 - 394); k++) {
            if (n[k] <= (395 - 386) && n[k] >= (228 - 228))
                n[k] = n[k] + '0';
            else {
                if (n[k] >= (291 - 281))
                    n[k] = 'A' - (348 - 338) + n[k];
            };
        }
        for (k = j - 1; k >= 0; k--) {
            printf ("%c", n[k]);
        };
    };
}

