int main () {
    int miEjzh;
    int abdhJEN6;
    int YPQEpSF;
    int akoEwJ3z;
    int dzbGaN;
    int Uxt4aXdgNPZD;
    miEjzh = 0;
    abdhJEN6 = 0;
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
    char s863u1DX [260], xPOX1W [260], RWfP3mzFA [260];
    scanf ("%s %s %s", s863u1DX, xPOX1W, RWfP3mzFA);
    Uxt4aXdgNPZD = (int) strlen (s863u1DX);
    dzbGaN = (int) strlen (xPOX1W);
    {
        YPQEpSF = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YPQEpSF < Uxt4aXdgNPZD -dzbGaN + 1) {
            for (akoEwJ3z = 0; akoEwJ3z < dzbGaN; akoEwJ3z++) {
                if (s863u1DX[YPQEpSF +akoEwJ3z] != xPOX1W[akoEwJ3z])
                    miEjzh = 0;
                if (s863u1DX[YPQEpSF +akoEwJ3z] == xPOX1W[akoEwJ3z])
                    miEjzh = miEjzh + 1;
                if (!(miEjzh != dzbGaN)) {
                    abdhJEN6 = YPQEpSF;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    YPQEpSF = Uxt4aXdgNPZD;
                };
            }
            YPQEpSF = YPQEpSF +1;
        };
    }
    if (abdhJEN6 == 0)
        printf ("%s", s863u1DX);
    if (abdhJEN6 != 0) {
        {
            YPQEpSF = 0;
            while (YPQEpSF < abdhJEN6) {
                printf ("%c", s863u1DX[YPQEpSF]);
                YPQEpSF = YPQEpSF +1;
            };
        }
        printf ("%s", RWfP3mzFA);
        {
            YPQEpSF = abdhJEN6 + dzbGaN;
            while (YPQEpSF < Uxt4aXdgNPZD) {
                printf ("%c", s863u1DX[YPQEpSF]);
                YPQEpSF++;
            };
        };
    }
    return 0;
}

