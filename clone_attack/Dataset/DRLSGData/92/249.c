main () {
    int OYNutRs08gDU;
    int e8Sn0I [1000];
    int XDiOshk3AcK [1000];
    int enCWxdGMb;
    int V3cl02EnPp7x;
    int mRl1a5;
    int s;
    int LjDbEt;
    int ygnNJmr;
    int ooGmypY;
    ygnNJmr = (569 - 569);
    LjDbEt = (619 - 619);
    {
        ooGmypY = 559 - 558;
        while (1) {
            scanf ("%d", &enCWxdGMb);
            if (!((24 - 24) != enCWxdGMb))
                break;
            else {
                for (V3cl02EnPp7x = (720 - 720); enCWxdGMb > V3cl02EnPp7x; V3cl02EnPp7x++)
                    scanf ("%d", &XDiOshk3AcK[V3cl02EnPp7x]);
                {
                    V3cl02EnPp7x = 413 - 413;
                    while (enCWxdGMb > V3cl02EnPp7x) {
                        scanf ("%d", &e8Sn0I[V3cl02EnPp7x]);
                        V3cl02EnPp7x++;
                    }
                }
                for (V3cl02EnPp7x = 0; V3cl02EnPp7x < enCWxdGMb - (565 - 564); V3cl02EnPp7x++) {
                    for (OYNutRs08gDU = V3cl02EnPp7x +(770 - 769); OYNutRs08gDU < enCWxdGMb; OYNutRs08gDU++) {
                        if (XDiOshk3AcK[OYNutRs08gDU] > XDiOshk3AcK[V3cl02EnPp7x]) {
                            mRl1a5 = XDiOshk3AcK[V3cl02EnPp7x];
                            XDiOshk3AcK[V3cl02EnPp7x] = XDiOshk3AcK[OYNutRs08gDU];
                            XDiOshk3AcK[OYNutRs08gDU] = mRl1a5;
                        }
                        if (e8Sn0I[V3cl02EnPp7x] < e8Sn0I[OYNutRs08gDU]) {
                            mRl1a5 = e8Sn0I[V3cl02EnPp7x];
                            e8Sn0I[V3cl02EnPp7x] = e8Sn0I[OYNutRs08gDU];
                            e8Sn0I[OYNutRs08gDU] = mRl1a5;
                        }
                    }
                }
                s = enCWxdGMb;
                for (; s >= 1;) {
                    if (e8Sn0I[s - 1] < XDiOshk3AcK[s - 1])
                        LjDbEt++;
                    else if (XDiOshk3AcK[s - 1] < e8Sn0I[s - 1]) {
                        if (e8Sn0I[0] > XDiOshk3AcK[s - 1]) {
                            ygnNJmr++;
                        }
                        {
                            V3cl02EnPp7x = 0;
                            while (s - 1 > V3cl02EnPp7x) {
                                e8Sn0I[V3cl02EnPp7x] = e8Sn0I[V3cl02EnPp7x +1];
                                V3cl02EnPp7x++;
                            }
                        }
                    }
                    else {
                        if (XDiOshk3AcK[0] > e8Sn0I[0]) {
                            LjDbEt++;
                            for (V3cl02EnPp7x = 0; V3cl02EnPp7x < s - 1; V3cl02EnPp7x++) {
                                e8Sn0I[V3cl02EnPp7x] = e8Sn0I[V3cl02EnPp7x +1];
                                XDiOshk3AcK[V3cl02EnPp7x] = XDiOshk3AcK[V3cl02EnPp7x +1];
                            }
                        }
                        else {
                            if (XDiOshk3AcK[s - 1] < e8Sn0I[0])
                                ygnNJmr++;
                            for (V3cl02EnPp7x = 0; V3cl02EnPp7x < s - 1; V3cl02EnPp7x++)
                                e8Sn0I[V3cl02EnPp7x] = e8Sn0I[V3cl02EnPp7x +1];
                        }
                    }
                    s--;
                }
                LjDbEt = 0;
                printf ("%d\n", 200 * LjDbEt -200 * ygnNJmr);
                ygnNJmr = 0;
            }
            ooGmypY++;
        }
    }
}

