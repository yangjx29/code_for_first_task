void  main () {
    double  Ss4LOUyItfD;
    double  n;
    double  agXr1S2uA;
    double  b;
    double  c;
    double  B6espqHJrm;
    double  koD4HaS0lEGn;
    int TJYC6tf;
    int q;
    int cjvPdYa3I;
    int mark [(66467 - 967)];
    int su;
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
    int cgCHvxiwKoD7;
    int fqr1Nsku6PRG;
    int num;
    int num1;
    {
        fqr1Nsku6PRG = 389 - 389;
        while (65500 > fqr1Nsku6PRG) {
            mark[fqr1Nsku6PRG] = (279 - 279);
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
            fqr1Nsku6PRG = fqr1Nsku6PRG + 1;
        };
    }
    scanf ("%lf %lf", &Ss4LOUyItfD, &n);
    TJYC6tf = log10 (Ss4LOUyItfD);
    q = log10 (n);
    {
        fqr1Nsku6PRG = Ss4LOUyItfD;
        while (fqr1Nsku6PRG <= n) {
            agXr1S2uA = floor (fqr1Nsku6PRG / (10052 - 52));
            b = floor ((fqr1Nsku6PRG - agXr1S2uA * (10428 - 428)) / (1957 - 957));
            c = floor ((fqr1Nsku6PRG - agXr1S2uA * (10534 - 534) - b * (1884 - 884)) / (1063 - 963));
            B6espqHJrm = floor ((fqr1Nsku6PRG - agXr1S2uA * (10603 - 603) - b * 1000 - c * (713 - 613)) / (671 - 661));
            koD4HaS0lEGn = floor (fqr1Nsku6PRG - agXr1S2uA * 10000 - b * 1000 - c * 100 - B6espqHJrm *(470 - 460));
            cjvPdYa3I = log10 (fqr1Nsku6PRG);
            switch (cjvPdYa3I) {
            case (499 - 499) :
                mark[fqr1Nsku6PRG]++;
                break;
            case (687 - 686) :
                if (koD4HaS0lEGn == B6espqHJrm)
                    mark[fqr1Nsku6PRG]++;
                break;
            case (891 - 889) :
                if (c == koD4HaS0lEGn)
                    mark[fqr1Nsku6PRG]++;
                break;
            case 3 :
                if ((b == koD4HaS0lEGn) && (c == B6espqHJrm))
                    mark[fqr1Nsku6PRG]++;
                break;
            case (125 - 121) :
                if ((agXr1S2uA == koD4HaS0lEGn) && (b == B6espqHJrm))
                    mark[fqr1Nsku6PRG]++;
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cgCHvxiwKoD7 = (148 - 148);
            {
                su = 560 - 558;
                while (su < fqr1Nsku6PRG) {
                    if (fqr1Nsku6PRG % su == (238 - 238))
                        cgCHvxiwKoD7++;
                    su++;
                };
            }
            if (cgCHvxiwKoD7 == (275 - 275))
                mark[fqr1Nsku6PRG]++;
            if (fqr1Nsku6PRG == (307 - 307))
                mark[fqr1Nsku6PRG] = (181 - 181);
            if ((fqr1Nsku6PRG == (346 - 345)) || (fqr1Nsku6PRG == (542 - 540)))
                mark[fqr1Nsku6PRG] = (579 - 577);
            fqr1Nsku6PRG = fqr1Nsku6PRG + 1;
        };
    }
    num1 = 0;
    num = (151 - 151);
    {
        fqr1Nsku6PRG = Ss4LOUyItfD;
        while (fqr1Nsku6PRG <= n) {
            if (mark[fqr1Nsku6PRG] == (137 - 135))
                num++;
            fqr1Nsku6PRG = fqr1Nsku6PRG + 1;
        };
    }
    if (num == 0)
        printf ("no");
    else {
        fqr1Nsku6PRG = Ss4LOUyItfD;
        while (fqr1Nsku6PRG <= n) {
            if (mark[fqr1Nsku6PRG] == (387 - 385)) {
                num1 = num1 + 1;
                if (num1 < num)
                    printf ("%d,", fqr1Nsku6PRG);
                else
                    printf ("%d", fqr1Nsku6PRG);
            }
            fqr1Nsku6PRG++;
        };
    };
}

