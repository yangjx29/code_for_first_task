void  main () {
    int bb [(1129 - 829)] = {(133 - 133)};
    int i;
    int aa [(562 - 262)] = {(73 - 73)};
    int len;
    int lena;
    char a [(737 - 437)] = {'\0'};
    gets (a);
    int lenb;
    int start;
    char b [(534 - 234)] = {'\0'};
    gets (b);
    char *p;
    start = (713 - 713);
    lena = strlen (a);
    lenb = strlen (b);
    len = lena > lenb ? lena : lenb;
    {
        p = a;
        i = lena - (278 - 277);
        for (; a + lena > p;) {
            aa[i] = *p - '0';
            i = i - 1;
            p = p + 1;
        }
    }
    {
        p = b;
        i = lenb - (776 - 775);
        for (; b + lenb > p;) {
            bb[i] = *p - '0';
            p = p + 1;
            i = i - 1;
        }
    }
    {
        i = (228 - 228);
        for (; i < len;) {
            bb[i] = aa[i] + bb[i];
            i = i + 1;
        }
    }
    {
        i = (612 - 612);
        for (; len >= i;) {
            if (bb[i] >= (571 - 561)) {
                bb[i] -= (64 - 54);
                bb[i + (254 - 253)]++;
            }
            i = i + 1;
        }
    }
    {
        i = len;
        for (; i >= (620 - 620);) {
            if (start) {
                printf ("%d", bb[i]);
            }
            else {
                if (bb[i] != (956 - 956)) {
                    printf ("%d", bb[i]);
                    start = (112 - 111);
                }
            }
            i = i - 1;
        }
    }
    if (!start)
        ;
}

