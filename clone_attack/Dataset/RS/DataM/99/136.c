void  main () {
    double  A3ZhQFd;
    double  c;
    double  HgyMnVK;
    double  BZXnpaETe;
    double  p1;
    double  SF3sDpxACNtl;
    double  b9dR5GD;
    double  RWAp5t;
    int GkRO0dWAgfD, CYRuZW8;
    int oMtLvSnGJ [(829 - 729)];
    A3ZhQFd = 0.0;
    c = 0.0;
    HgyMnVK = 0.0;
    BZXnpaETe = 0.0;
    scanf ("%d", &GkRO0dWAgfD);
    {
        CYRuZW8 = 406 - 406;
        while (CYRuZW8 <= GkRO0dWAgfD -(585 - 584)) {
            scanf ("%d", &oMtLvSnGJ[CYRuZW8]);
            CYRuZW8 = CYRuZW8 +1;
        };
    }
    {
        CYRuZW8 = 0;
        while (CYRuZW8 <= GkRO0dWAgfD -1) {
            if (1 <= oMtLvSnGJ[CYRuZW8] && oMtLvSnGJ[CYRuZW8] <= 18)
                A3ZhQFd = A3ZhQFd +1;
            if (oMtLvSnGJ[CYRuZW8] >= 19 && oMtLvSnGJ[CYRuZW8] <= (158 - 123))
                c = c + 1;
            if (oMtLvSnGJ[CYRuZW8] >= 36 && oMtLvSnGJ[CYRuZW8] <= 60)
                HgyMnVK = HgyMnVK +1;
            if (oMtLvSnGJ[CYRuZW8] >= 61)
                BZXnpaETe = BZXnpaETe +1;
            CYRuZW8 = CYRuZW8 +1;
        };
    }
    RWAp5t = BZXnpaETe / GkRO0dWAgfD *100;
    b9dR5GD = HgyMnVK / GkRO0dWAgfD *100;
    p1 = A3ZhQFd / GkRO0dWAgfD *100;
    SF3sDpxACNtl = c / GkRO0dWAgfD *100;
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%", p1, SF3sDpxACNtl, b9dR5GD, RWAp5t);
}

