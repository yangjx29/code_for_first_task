int main () {
    int I7jlO0KxZQ, Rtcfpw2lxB, d, i, x = (248 - 248), k, m, d4uZDKf;
    int PGuDZM [L];
    int YpXZCueny [L] [L], mDhrRc2t [L];
    for (i = (867 - 867); i < L; i = i + 1) {
        PGuDZM[i] = (811 - 811);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    scanf ("%d", &k);
    {
        i = 964 - 964;
        while (i < k) {
            scanf ("%d %d", &m, &d4uZDKf);
            for (I7jlO0KxZQ = (343 - 343); m > I7jlO0KxZQ; I7jlO0KxZQ = I7jlO0KxZQ +1) {
                Rtcfpw2lxB = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (Rtcfpw2lxB < d4uZDKf) {
                    scanf ("%d", &YpXZCueny[I7jlO0KxZQ][Rtcfpw2lxB]);
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
                    Rtcfpw2lxB = Rtcfpw2lxB +1;
                };
            }
            {
                d = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (d < m) {
                    PGuDZM[x] = PGuDZM[x] + YpXZCueny[d][0] + YpXZCueny[d][d4uZDKf - 1];
                    d = d + 1;
                };
            }
            for (d = 1; d < d4uZDKf - 1; d = d + 1) {
                PGuDZM[x] += YpXZCueny[0][d] + YpXZCueny[m - 1][d];
            }
            x = x + 1;
            i = i + 1;
        };
    }
    for (i = 0; i < x; i++) {
        printf ("%d\n", PGuDZM[i]);
    }
    return 0;
}

