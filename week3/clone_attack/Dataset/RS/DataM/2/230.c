void  main () {
    char PPUuXqEt67k8 [(26564 - 564)];
    char r;
    char max;
    int n;
    int lFVdwYxS;
    int zqrpIl2GKZM [(159 - 133)] = {(654 - 654)};
    int vHlotqx2NY [(264 - 238)] = {(64 - 64)};
    int Q7OEzrL;
    int F37dTNB2M6;
    int cdC98tbLj6;
    int TqQawUK2AtfV;
    struct   book {
        int num;
        char GDnHcGYZtw [26];
    }
    DvZCHMPdOs [(1525 - 526)];
    scanf ("%d\n", &n);
    {
        lFVdwYxS = 108 - 108;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (lFVdwYxS < n) {
            scanf ("%d %s\n", &DvZCHMPdOs[lFVdwYxS].num, &DvZCHMPdOs[lFVdwYxS].GDnHcGYZtw);
            lFVdwYxS = lFVdwYxS + 1;
        };
    }
    strcpy (PPUuXqEt67k8, DvZCHMPdOs[(916 - 916)].GDnHcGYZtw);
    for (lFVdwYxS = (501 - 500); lFVdwYxS < n; lFVdwYxS = lFVdwYxS + 1)
        strcat (PPUuXqEt67k8, DvZCHMPdOs[lFVdwYxS].GDnHcGYZtw);
    F37dTNB2M6 = strlen (PPUuXqEt67k8);
    {
        Q7OEzrL = 814 - 814;
        r = 'A';
        while (r <= 'Z', 26 > Q7OEzrL) {
            {
                lFVdwYxS = 374 - 374;
                while (F37dTNB2M6 > lFVdwYxS) {
                    if (PPUuXqEt67k8[lFVdwYxS] == r)
                        zqrpIl2GKZM[Q7OEzrL]++;
                    lFVdwYxS = lFVdwYxS + 1;
                };
            }
            Q7OEzrL = Q7OEzrL +1;
            r = r + 1;
        };
    }
    {
        lFVdwYxS = 849 - 849;
        while (lFVdwYxS < 26) {
            vHlotqx2NY[lFVdwYxS] = zqrpIl2GKZM[lFVdwYxS];
            lFVdwYxS = lFVdwYxS + 1;
        };
    }
    {
        Q7OEzrL = 624 - 624;
        while (Q7OEzrL < (650 - 625)) {
            {
                lFVdwYxS = 0;
                while (lFVdwYxS < (231 - 206) - Q7OEzrL) {
                    if (vHlotqx2NY[lFVdwYxS] < vHlotqx2NY[lFVdwYxS + (86 - 85)]) {
                        cdC98tbLj6 = vHlotqx2NY[lFVdwYxS];
                        vHlotqx2NY[lFVdwYxS] = vHlotqx2NY[lFVdwYxS + 1];
                        vHlotqx2NY[lFVdwYxS + 1] = cdC98tbLj6;
                    }
                    lFVdwYxS = lFVdwYxS + 1;
                };
            }
            Q7OEzrL = Q7OEzrL +1;
        };
    }
    TqQawUK2AtfV = vHlotqx2NY[0];
    {
        lFVdwYxS = 0;
        while (lFVdwYxS < 26) {
            if (zqrpIl2GKZM[lFVdwYxS] == TqQawUK2AtfV)
                max = lFVdwYxS + (885 - 820);
            lFVdwYxS++;
        };
    }
    printf ("%c\n%d\n", max, TqQawUK2AtfV);
    for (lFVdwYxS = 0; lFVdwYxS < n; lFVdwYxS = lFVdwYxS + 1) {
        Q7OEzrL = 0;
        while (Q7OEzrL < 26) {
            if (DvZCHMPdOs[lFVdwYxS].GDnHcGYZtw[Q7OEzrL] == max)
                printf ("%d\n", DvZCHMPdOs[lFVdwYxS].num);
            Q7OEzrL++;
        };
    };
}

