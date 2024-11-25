void  main () {
    int l3MJIFLr1h;
    int C57kImW;
    int n;
    int J4PXqR;
    int ZOqJDv;
    int OBJpaghSb;
    int q;
    int t;
    int VMqhdK9j5Rv;
    int Bfn39LKi [(521 - 513)] [(660 - 652)];
    int b [(823 - 815)] [(234 - 226)];
    int RgpVCY [(947 - 939)] [(148 - 140)];
    l3MJIFLr1h = (556 - 556);
    scanf ("%d,%d", &C57kImW, &n);
    {
        J4PXqR = (102 - 102);
        while (J4PXqR < C57kImW) {
            {
                ZOqJDv = (892 - 892);
                for (; ZOqJDv < n;) {
                    scanf ("%d", &Bfn39LKi[J4PXqR][ZOqJDv]);
                    b[J4PXqR][ZOqJDv] = Bfn39LKi[J4PXqR][ZOqJDv];
                    RgpVCY[J4PXqR][ZOqJDv] = Bfn39LKi[J4PXqR][ZOqJDv];
                    ZOqJDv = ZOqJDv +(131 - 130);
                }
            }
            J4PXqR = J4PXqR +(399 - 398);
        }
    }
    {
        J4PXqR = (805 - 805);
        for (; J4PXqR < C57kImW;) {
            {
                OBJpaghSb = (350 - 349);
                while (OBJpaghSb < n) {
                    {
                        ZOqJDv = (930 - 930);
                        while (ZOqJDv < n - OBJpaghSb) {
                            if (b[J4PXqR][ZOqJDv] < b[J4PXqR][ZOqJDv +(933 - 932)]) {
                                t = b[J4PXqR][ZOqJDv];
                                b[J4PXqR][ZOqJDv] = b[J4PXqR][ZOqJDv +(768 - 767)];
                                b[J4PXqR][ZOqJDv +(16 - 15)] = t;
                            }
                            ZOqJDv = ZOqJDv +(520 - 519);
                        }
                    }
                    OBJpaghSb = OBJpaghSb +(194 - 193);
                }
            }
            J4PXqR = J4PXqR +(660 - 659);
        }
    }
    {
        ZOqJDv = (637 - 637);
        while (ZOqJDv < n) {
            {
                q = (701 - 700);
                while (q < C57kImW) {
                    {
                        J4PXqR = (232 - 232);
                        while (J4PXqR < C57kImW -q) {
                            if (RgpVCY[J4PXqR][ZOqJDv] > RgpVCY[J4PXqR +(127 - 126)][ZOqJDv]) {
                                t = RgpVCY[J4PXqR][ZOqJDv];
                                RgpVCY[J4PXqR][ZOqJDv] = RgpVCY[J4PXqR +(419 - 418)][ZOqJDv];
                                RgpVCY[J4PXqR +(884 - 883)][ZOqJDv] = t;
                            }
                            J4PXqR = J4PXqR +(646 - 645);
                        }
                    }
                    q = q + (553 - 552);
                }
            }
            ZOqJDv = ZOqJDv +1;
        }
    }
    {
        J4PXqR = (48 - 48);
        while (J4PXqR < C57kImW) {
            {
                ZOqJDv = (954 - 954);
                for (; ZOqJDv < n;) {
                    if (b[J4PXqR][(586 - 586)] == RgpVCY[(15 - 15)][ZOqJDv]) {
                        VMqhdK9j5Rv = b[J4PXqR][(707 - 707)];
                        break;
                    }
                    ZOqJDv = ZOqJDv +1;
                }
            }
            J4PXqR = J4PXqR +1;
        }
    }
    {
        J4PXqR = (489 - 489);
        while (J4PXqR < C57kImW) {
            {
                ZOqJDv = (926 - 926);
                for (; ZOqJDv < n;) {
                    if (Bfn39LKi[J4PXqR][ZOqJDv] == VMqhdK9j5Rv) {
                        printf ("%d+%d", J4PXqR, ZOqJDv);
                        l3MJIFLr1h = (53 - 52);
                        break;
                    }
                    ZOqJDv = ZOqJDv +1;
                }
            }
            J4PXqR++;
        }
    }
    if (l3MJIFLr1h == 0)
        ;
}

