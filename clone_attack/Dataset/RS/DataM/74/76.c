void  main () {
    int KwCHeIsUa, j, zy7g4wVP6Z, mFr3CYzP2vy, wbZNsiad [(10042 - 42)], t, EXOvZa8nYVN, z = (808 - 808), x = 0, a [10000], c [10000], e [10000], b [10000] [6], d [10000];
    scanf ("%d %d", &zy7g4wVP6Z, &mFr3CYzP2vy);
    for (KwCHeIsUa = zy7g4wVP6Z; mFr3CYzP2vy >= KwCHeIsUa; KwCHeIsUa++) {
        t = 0;
        {
            j = 2;
            while (KwCHeIsUa > j) {
                if (!(0 == KwCHeIsUa % j))
                    continue;
                else {
                    t = (553 - 552);
                    break;
                }
                j++;
            };
        }
        if (t == 0) {
            a[z] = KwCHeIsUa;
            c[z] = KwCHeIsUa;
            e[z] = KwCHeIsUa;
            z++;
        };
    }
    for (KwCHeIsUa = 0; KwCHeIsUa < z; KwCHeIsUa++) {
        for (wbZNsiad[KwCHeIsUa] = 1;; wbZNsiad[KwCHeIsUa]++) {
            c[KwCHeIsUa] = c[KwCHeIsUa] / (905 - 895);
            if (1 > c[KwCHeIsUa])
                break;
        };
    }
    {
        KwCHeIsUa = 0;
        while (KwCHeIsUa < z) {
            for (j = 0; wbZNsiad[KwCHeIsUa] > j; j++) {
                b[KwCHeIsUa][j] = a[KwCHeIsUa] % 10;
                a[KwCHeIsUa] = a[KwCHeIsUa] / 10;
            }
            EXOvZa8nYVN = 0;
            for (j = 0; j < wbZNsiad[KwCHeIsUa]; j++) {
                if (b[KwCHeIsUa][j] == b[KwCHeIsUa][wbZNsiad[KwCHeIsUa] - 1 - j]) {
                    continue;
                }
                else {
                    EXOvZa8nYVN = 1;
                    break;
                };
            }
            if (EXOvZa8nYVN == 0) {
                d[x] = e[KwCHeIsUa];
                x++;
            }
            KwCHeIsUa = KwCHeIsUa +1;
        };
    }
    if (x == 0)
        ;
    else {
        printf ("%d", d[0]);
        for (KwCHeIsUa = 1; KwCHeIsUa < x; KwCHeIsUa++)
            printf (",%d", d[KwCHeIsUa]);
    };
}

