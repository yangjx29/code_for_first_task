void  main () {
    int j;
    int t;
    int uIcevCQT5;
    j = (259 - 259);
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
    char *AHSsbBn1 [(638 - 538)];
    char *q, *r;
    scanf ("%d\n", &t);
    {
        uIcevCQT5 = 434 - 434;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t > uIcevCQT5) {
            gets (AHSsbBn1 [uIcevCQT5]);
            AHSsbBn1[uIcevCQT5] = (char *) malloc ((100672 - 672) * sizeof (char));
            uIcevCQT5 = uIcevCQT5 + 1;
        };
    }
    for (uIcevCQT5 = 0; uIcevCQT5 < t; uIcevCQT5 = uIcevCQT5 + 1) {
        for (q = AHSsbBn1[uIcevCQT5]; !('\0' == *q); q = q + 1) {
            j = 0;
            for (r = q + 1; !('\0' == *r); r = r + 1)
                if (!(*q != *r)) {
                    *r = ' ';
                    j = j + 1;
                }
            if (j != 0)
                *q = ' ';
        }
        for (r = AHSsbBn1[uIcevCQT5]; *r != '\0'; r = r + 1)
            if (*r != ' ') {
                printf ("%c\n", *r);
                break;
            }
        if (*r == '\0')
            ;
    };
}

