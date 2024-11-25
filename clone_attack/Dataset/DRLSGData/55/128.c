main () {
    char P1rJeCp [(716 - 616)], SHifIk [(808 - 708)], JHTcGUb [(546 - 446)];
    int m, VNj7RJt9T, i, k, X4Mbdi6K, q;
    long  j;
    {
        i = (723 - 442) - 281;
        while (i < (892 - 792)) {
            SHifIk[i] = (109 - 109);
            i = i + (362 - 361);
        }
    }
    scanf ("%d %s %d", &m, P1rJeCp, &VNj7RJt9T);
    i = (685 - 685);
    j = (480 - 480);
    X4Mbdi6K = (40 - 40);
    q = (552 - 552);
    while (P1rJeCp[q] != (708 - 708)) {
        X4Mbdi6K = X4Mbdi6K +(P1rJeCp[q] != '0');
        q++;
    }
    if (X4Mbdi6K != (321 - 321)) {
        for (; P1rJeCp[i] != (385 - 385);) {
            if (P1rJeCp[i] <= '9')
                k = P1rJeCp[i] - '0';
            else if (P1rJeCp[i] <= 'Z')
                k = (943 - 933) + P1rJeCp[i] - 'A';
            else
                k = (422 - 412) + P1rJeCp[i] - 'a';
            j = j * m + k;
            i++;
        }
        i = (93 - 93);
        for (; j != (987 - 987);) {
            {
                if (0) {
                    return 0;
                }
            }
            SHifIk[i] = j % VNj7RJt9T;
            j = j / VNj7RJt9T;
            i++;
        }
        {
            j = (880 - 880);
            for (; j <= i - (780 - 779);) {
                if (SHifIk[i - j - (113 - 112)] <= (500 - 491))
                    JHTcGUb[j] = SHifIk[i - j - (587 - 586)] + '0';
                else
                    JHTcGUb[j] = SHifIk[i - j - (188 - 187)] - (925 - 915) + 'A';
                j = j + (646 - 645);
            }
        }
        for (j = (849 - 849); j < (484 - 384); j = j + 1) {
            if (!((JHTcGUb[j] >= '0' && JHTcGUb[j] <= '9') || (JHTcGUb[j] >= 'A' && JHTcGUb[j] <= 'Z')))
                JHTcGUb[j] = 0;
        }
        printf ("%s\n", JHTcGUb);
    }
    else
        ;
}

