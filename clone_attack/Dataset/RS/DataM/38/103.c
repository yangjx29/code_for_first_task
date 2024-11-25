void  main () {
    double  *XDriLseQl1H;
    double  *JZnVjIpzma;
    double  l0aiu6cLs;
    int BaOlz0jAKt, TdiSn8w, bzNDljJqtn1, BI0rE4vDl;
    scanf ("%d", &BaOlz0jAKt);
    XDriLseQl1H = (double  *) malloc (sizeof (double ) * BaOlz0jAKt);
    {
        TdiSn8w = 680 - 680;
        while (TdiSn8w < BaOlz0jAKt) {
            *(XDriLseQl1H +TdiSn8w) = (179 - 179);
            TdiSn8w = TdiSn8w +1;
        };
    }
    {
        TdiSn8w = 0;
        while (TdiSn8w < BaOlz0jAKt) {
            free (JZnVjIpzma);
            l0aiu6cLs = 0;
            scanf ("%d", &BI0rE4vDl);
            JZnVjIpzma = (double  *) malloc (sizeof (double ) * BI0rE4vDl);
            {
                bzNDljJqtn1 = 0;
                while (BI0rE4vDl > bzNDljJqtn1) {
                    scanf ("%lf", JZnVjIpzma +bzNDljJqtn1);
                    l0aiu6cLs += *(JZnVjIpzma +bzNDljJqtn1);
                    bzNDljJqtn1 = bzNDljJqtn1 + 1;
                };
            }
            l0aiu6cLs = l0aiu6cLs / BI0rE4vDl;
            {
                bzNDljJqtn1 = 0;
                while (bzNDljJqtn1 < BI0rE4vDl) {
                    *(XDriLseQl1H +TdiSn8w) = *(XDriLseQl1H +TdiSn8w) + (*(JZnVjIpzma +bzNDljJqtn1) - l0aiu6cLs) * (*(JZnVjIpzma +bzNDljJqtn1) - l0aiu6cLs);
                    bzNDljJqtn1++;
                };
            }
            *(XDriLseQl1H +TdiSn8w) = *(XDriLseQl1H +TdiSn8w) / (BI0rE4vDl);
            *(XDriLseQl1H +TdiSn8w) = sqrt (*(XDriLseQl1H +TdiSn8w));
            TdiSn8w++;
        };
    }
    {
        TdiSn8w = 0;
        while (TdiSn8w < BaOlz0jAKt) {
            printf ("%.5f\n", *(XDriLseQl1H +TdiSn8w));
            TdiSn8w++;
        };
    };
}

