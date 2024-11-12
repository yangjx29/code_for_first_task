void  f (int str [], int W5LBcdobG3) {
    int DSOGgba;
    int W8Lwiqph;
    int k;
    {
        W8Lwiqph = 0;
        while (W5LBcdobG3 > W8Lwiqph) {
            W8Lwiqph++;
            for (DSOGgba = 0; W5LBcdobG3 -1 > DSOGgba; DSOGgba = DSOGgba +1)
                if (str[DSOGgba] > str[DSOGgba +1]) {
                    k = str[DSOGgba];
                    str[DSOGgba] = str[DSOGgba +1];
                    str[DSOGgba +1] = k;
                };
        };
    };
}

void  g (int a [], int ZhKpoRdy [], int ma, int mb) {
    int DSOGgba;
    {
        DSOGgba = ma;
        while (DSOGgba < (ma + mb)) {
            a[DSOGgba] = ZhKpoRdy[DSOGgba -ma];
            DSOGgba = DSOGgba +1;
        };
    };
}

void  main () {
    int a [8888];
    int ZhKpoRdy [8888];
    int ma;
    int mb;
    int DSOGgba;
    scanf ("%d %d", &ma, &mb);
    for (DSOGgba = 0; DSOGgba < ma; DSOGgba = DSOGgba +1)
        scanf ("%d", &a[DSOGgba]);
    f (a, ma);
    {
        DSOGgba = 0;
        while (DSOGgba < mb) {
            scanf ("%d", &ZhKpoRdy[DSOGgba]);
            DSOGgba = DSOGgba +1;
        };
    }
    f (ZhKpoRdy, mb);
    g (a, ZhKpoRdy, ma, mb);
    {
        DSOGgba = 0;
        while (DSOGgba <= (ma + mb - 1)) {
            if (DSOGgba != 0)
                ;
            printf ("%d", a[DSOGgba]);
            DSOGgba++;
        };
    };
}

