void  Kw1Xt3mFBARp (int F9gujy2Wpt [], int YBVcfhgO9) {
    int AuHZeYzPrING;
    int rgeGRN;
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
    int wM1uyE;
    for (rgeGRN = (693 - 692); YBVcfhgO9 > rgeGRN; rgeGRN = rgeGRN + 1)
        for (AuHZeYzPrING = (594 - 594); YBVcfhgO9 -rgeGRN > AuHZeYzPrING; AuHZeYzPrING = AuHZeYzPrING +1)
            if (F9gujy2Wpt[AuHZeYzPrING +(907 - 906)] < F9gujy2Wpt[AuHZeYzPrING]) {
                wM1uyE = F9gujy2Wpt[AuHZeYzPrING];
                F9gujy2Wpt[AuHZeYzPrING] = F9gujy2Wpt[AuHZeYzPrING +(953 - 952)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                F9gujy2Wpt[AuHZeYzPrING +(63 - 62)] = wM1uyE;
            };
}

void  IJF08Tg (int F9gujy2Wpt [], int YBVcfhgO9) {
    int AuHZeYzPrING;
    for (AuHZeYzPrING = 0; YBVcfhgO9 -1 > AuHZeYzPrING; AuHZeYzPrING = AuHZeYzPrING +1)
        printf ("%d ", F9gujy2Wpt[AuHZeYzPrING]);
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
    printf ("%d", F9gujy2Wpt[YBVcfhgO9 -1]);
}

void  CRN61i0SXTP9 (int b [], int wM1uyE) {
    int AuHZeYzPrING;
    {
        AuHZeYzPrING = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (wM1uyE > AuHZeYzPrING) {
            printf (" %d", b[AuHZeYzPrING]);
            AuHZeYzPrING = AuHZeYzPrING +1;
        };
    };
}

void  main () {
    scanf ("\n");
    scanf ("\n");
    int F9gujy2Wpt [10];
    int YBVcfhgO9;
    int b [10];
    int wM1uyE;
    int AuHZeYzPrING;
    scanf ("%d %d", &YBVcfhgO9, &wM1uyE);
    {
        AuHZeYzPrING = 0;
        while (YBVcfhgO9 -1 > AuHZeYzPrING) {
            scanf ("%d ", &F9gujy2Wpt[AuHZeYzPrING]);
            AuHZeYzPrING = AuHZeYzPrING +1;
        };
    }
    scanf ("%d", &F9gujy2Wpt[YBVcfhgO9 -1]);
    Kw1Xt3mFBARp (F9gujy2Wpt, YBVcfhgO9);
    IJF08Tg (F9gujy2Wpt, YBVcfhgO9);
    {
        AuHZeYzPrING = 0;
        while (AuHZeYzPrING < wM1uyE - 1) {
            scanf ("%d ", &b[AuHZeYzPrING]);
            AuHZeYzPrING = AuHZeYzPrING +1;
        };
    }
    scanf ("%d", &b[wM1uyE - 1]);
    Kw1Xt3mFBARp (b, wM1uyE);
    CRN61i0SXTP9 (b, wM1uyE);
}

