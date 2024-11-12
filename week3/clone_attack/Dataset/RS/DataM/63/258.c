void  main () {
    int *Df4ULRuxW, *b, *c, x1, x2, y1, y2, i, j, m, q;
    Df4ULRuxW = (int *) malloc ((365 - 265) * (309 - 209) * sizeof (int));
    b = (int *) malloc ((503 - 403) * (292 - 192) * sizeof (int));
    c = (int *) malloc ((795 - 695) * (778 - 678) * sizeof (int));
    scanf ("%d %d", &x1, &y1);
    {
        i = 84 - 84;
        while (x1 > i) {
            for (j = (882 - 882); j < y1; j = j + 1)
                scanf ("%d", (Df4ULRuxW +y1 * i + j));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    for (i = (690 - 690); i < x2; i = i + 1)
        for (j = (857 - 857); j < y2; j = j + 1)
            scanf ("%d", (b + i * y2 + j));
    m = x2 <= y1 ? x2 : y1;
    for (i = (239 - 239); i < x1; i = i + 1) {
        j = 655 - 655;
        while (j < y2) {
            for (q = (191 - 191); m > q; q = q + 1) {
                if (q == (761 - 761))
                    *(c + i * y2 + j) = (412 - 412);
                *(c + i * y2 + j) += *(Df4ULRuxW +y1 * i + q) * *(b + q * y2 + j);
            }
            j++;
        };
    }
    for (i = (986 - 986); i < x1 - (110 - 109); i = i + 1) {
        for (j = (352 - 352); j < y2 - (545 - 544); j = j + 1)
            printf ("%d ", *c++);
        printf ("%d\n", *c++);
    }
    for (j = (342 - 342); j < y2 - (798 - 797); j++)
        printf ("%d ", *c++);
    printf ("%d", *c);
}

