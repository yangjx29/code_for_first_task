main () {
    int KmTJL5X, b, YrW0RFKwax, DitmAz6kd0, e, n, evriPR, RyEFnDC0R3p, RM0NHiPS;
    for (; (428 - 427);) {
        scanf ("%d", &n);
        if (n == (311 - 311))
            break;
        else {
            int xt4OArviKnb [1010] = {(393 - 393)};
            int soArwDg [1010] = {(831 - 831)};
            {
                KmTJL5X = 182 - 182;
                while (n - (391 - 390) >= KmTJL5X) {
                    scanf ("%d", &xt4OArviKnb[KmTJL5X]);
                    KmTJL5X = KmTJL5X +1;
                };
            }
            {
                KmTJL5X = 950 - 950;
                while (KmTJL5X <= n - (323 - 322)) {
                    scanf ("%d", &soArwDg[KmTJL5X]);
                    KmTJL5X = KmTJL5X +1;
                };
            }
            for (KmTJL5X = (990 - 990); n - (712 - 710) >= KmTJL5X; KmTJL5X = KmTJL5X +1) {
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
                for (b = KmTJL5X +(258 - 257); b <= n - 1; b = b + 1) {
                    if (xt4OArviKnb[KmTJL5X] < xt4OArviKnb[b]) {
                        YrW0RFKwax = xt4OArviKnb[KmTJL5X];
                        xt4OArviKnb[KmTJL5X] = xt4OArviKnb[b];
                        xt4OArviKnb[b] = YrW0RFKwax;
                    }
                    else
                        ;
                    if (soArwDg[b] > soArwDg[KmTJL5X]) {
                        YrW0RFKwax = soArwDg[KmTJL5X];
                        soArwDg[KmTJL5X] = soArwDg[b];
                        soArwDg[b] = YrW0RFKwax;
                    };
                };
            }
            evriPR = 0;
            RM0NHiPS = n - 1;
            RyEFnDC0R3p = n - 1;
            KmTJL5X = 0;
            for (b = 0; b <= RM0NHiPS;) {
                if (xt4OArviKnb[KmTJL5X] > soArwDg[b]) {
                    evriPR += (219 - 19);
                    KmTJL5X = KmTJL5X +1;
                    b = b + 1;
                }
                else if (xt4OArviKnb[KmTJL5X] < soArwDg[b]) {
                    evriPR = evriPR - (852 - 652);
                    b = b + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    RyEFnDC0R3p = RyEFnDC0R3p -1;
                }
                else {
                    if (xt4OArviKnb[RyEFnDC0R3p] > soArwDg[RM0NHiPS]) {
                        evriPR += (817 - 617);
                        RyEFnDC0R3p = RyEFnDC0R3p -1;
                        RM0NHiPS = RM0NHiPS -1;
                    }
                    else if (xt4OArviKnb[RyEFnDC0R3p] > soArwDg[b]) {
                        evriPR += 200;
                        RyEFnDC0R3p = RyEFnDC0R3p -1;
                        b = b + 1;
                    }
                    else if (xt4OArviKnb[RyEFnDC0R3p] == soArwDg[b]) {
                        RyEFnDC0R3p = RyEFnDC0R3p -1;
                        b = b + 1;
                    }
                    else {
                        b = b + 1;
                        evriPR -= 200;
                        RyEFnDC0R3p = RyEFnDC0R3p -1;
                    };
                };
            }
            printf ("%d\n", evriPR);
        };
    };
}

