void  main () {
    int BMSsXGkC35lp;
    int lol1T5MBP;
    int oGyOWm;
    int a;
    int Phe7ND6uVH8G;
    int ltypG2Sg [(660 - 652)] [(589 - 581)];
    int cnHxGPaNWDZV [8];
    int mngPOSL2Wa [8];
    int pvBljU [8];
    int VczGb04;
    scanf ("%d,%d", &a, &Phe7ND6uVH8G);
    for (BMSsXGkC35lp = (824 - 824); a > BMSsXGkC35lp; BMSsXGkC35lp++) {
        lol1T5MBP = 101 - 101;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Phe7ND6uVH8G > lol1T5MBP) {
            scanf ("%d", &ltypG2Sg[BMSsXGkC35lp][lol1T5MBP]);
            lol1T5MBP++;
        };
    }
    {
        BMSsXGkC35lp = 0;
        while (a > BMSsXGkC35lp) {
            cnHxGPaNWDZV[BMSsXGkC35lp] = ltypG2Sg[BMSsXGkC35lp][0];
            for (lol1T5MBP = 0; lol1T5MBP < Phe7ND6uVH8G; lol1T5MBP++) {
                if (cnHxGPaNWDZV[BMSsXGkC35lp] <= ltypG2Sg[BMSsXGkC35lp][lol1T5MBP]) {
                    cnHxGPaNWDZV[BMSsXGkC35lp] = ltypG2Sg[BMSsXGkC35lp][lol1T5MBP];
                    mngPOSL2Wa[BMSsXGkC35lp] = BMSsXGkC35lp;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    pvBljU[BMSsXGkC35lp] = lol1T5MBP;
                };
            }
            BMSsXGkC35lp = BMSsXGkC35lp +1;
        };
    }
    {
        BMSsXGkC35lp = 0;
        while (a > BMSsXGkC35lp) {
            {
                oGyOWm = 0;
                while (oGyOWm < a) {
                    if (ltypG2Sg[oGyOWm][pvBljU[BMSsXGkC35lp]] < ltypG2Sg[mngPOSL2Wa[BMSsXGkC35lp]][pvBljU[BMSsXGkC35lp]]) {
                        VczGb04 = 0;
                        break;
                    }
                    else
                        VczGb04 = 1;
                    oGyOWm++;
                };
            }
            if (VczGb04 == 1) {
                printf ("%d+%d", mngPOSL2Wa[BMSsXGkC35lp], pvBljU[BMSsXGkC35lp]);
                break;
            }
            BMSsXGkC35lp++;
        };
    }
    if (VczGb04 == 0)
        printf ("No");
}

