main () {
    int mQnPr0XN, tjTnlH, l;
    int m, iJ0QyH8mCz, j, s, KpyKEmB, dtNBuZzYU;
    int NTSdhHn4fF2;
    scanf ("%d", &NTSdhHn4fF2);
    l = 0;
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
    tjTnlH = 0;
    mQnPr0XN = 0;
    for (m = 2; NTSdhHn4fF2 -1 > m; m++) {
        KpyKEmB = sqrt (m);
        for (iJ0QyH8mCz = 2; KpyKEmB >= iJ0QyH8mCz; iJ0QyH8mCz = iJ0QyH8mCz + 1) {
            if (!(0 != m % iJ0QyH8mCz)) {
                mQnPr0XN = 1;
                break;
            };
        }
        if (!(0 != mQnPr0XN)) {
            s = m + 2;
            dtNBuZzYU = sqrt (s);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = 2; j <= dtNBuZzYU; j = j + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (s % j == 0) {
                    tjTnlH = 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                };
            }
            if (tjTnlH == 0) {
                l = 1;
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
                printf ("%d %d\n", m, s);
            };
        }
        tjTnlH = 0;
        mQnPr0XN = 0;
    }
    if (l == 0)
        printf ("empty");
}

