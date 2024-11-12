int main () {
    int flag;
    int S67c925WbO;
    int Btw8agf2Kx;
    int jz [(293 - 285)] [(41 - 33)];
    int mUYeRtDvl;
    int CXhZwQNl;
    int rlXU7IS1dz;
    int min;
    int q;
    int p5GZvt1;
    int pbPURp;
    int n;
    flag = (533 - 533);
    scanf ("%d,%d", &mUYeRtDvl, &CXhZwQNl);
    {
        S67c925WbO = 840 - 840;
        while (S67c925WbO < mUYeRtDvl) {
            {
                Btw8agf2Kx = 761 - 761;
                while (Btw8agf2Kx < CXhZwQNl) {
                    scanf ("%d", &jz[S67c925WbO][Btw8agf2Kx]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Btw8agf2Kx = Btw8agf2Kx +1;
                };
            }
            S67c925WbO = S67c925WbO +1;
        };
    }
    {
        S67c925WbO = 757 - 757;
        while (S67c925WbO < mUYeRtDvl) {
            q = (978 - 978), p5GZvt1 = (391 - 391);
            rlXU7IS1dz = jz[S67c925WbO][(413 - 413)];
            {
                Btw8agf2Kx = 112 - 111;
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
                while (Btw8agf2Kx < CXhZwQNl) {
                    if (jz[S67c925WbO][Btw8agf2Kx] > rlXU7IS1dz) {
                        rlXU7IS1dz = jz[S67c925WbO][Btw8agf2Kx];
                        q = Btw8agf2Kx;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    Btw8agf2Kx = Btw8agf2Kx +1;
                };
            }
            min = jz[(149 - 149)][q];
            {
                n = 602 - 602;
                pbPURp = q;
                while (n < mUYeRtDvl) {
                    if (jz[n][pbPURp] < min) {
                        min = jz[n][pbPURp];
                        p5GZvt1 = n;
                    }
                    n = n + 1;
                };
            }
            if (rlXU7IS1dz == min) {
                printf ("%d+%d", p5GZvt1, q);
                flag = 1;
            }
            S67c925WbO = S67c925WbO +1;
        };
    }
    if (flag == 0)
        ;
    return 0;
}

