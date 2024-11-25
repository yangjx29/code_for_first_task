int main () {
    int sxcHQXi7;
    double  E0fQC7sVq [45];
    double  e;
    double  d;
    double  w1zRQIhZGKsl [45];
    int wAFaWf5GDTCy, UrpEVeN, c, n, MiLdk52x, USmyMdAhpU, xg60ecLzTyq, Zr0eaV5 = 0, cQXhuYU5om;
    int WI8EjiMN [10];
    int rkAWbcfZ [10];
    int hn5VXcCqOGp [10];
    sxcHQXi7 = 1;
    scanf ("%d", &n);
    cQXhuYU5om = n * (n - 1) / 2;
    {
        MiLdk52x = 0;
        while (MiLdk52x < n) {
            scanf ("%d", &hn5VXcCqOGp[MiLdk52x]);
            scanf ("%d", &rkAWbcfZ[MiLdk52x]);
            scanf ("%d", &WI8EjiMN[MiLdk52x]);
            MiLdk52x = MiLdk52x +1;
        }
    }
    {
        MiLdk52x = 0;
        while (MiLdk52x < n) {
            {
                xg60ecLzTyq = MiLdk52x +1;
                while (xg60ecLzTyq < n) {
                    wAFaWf5GDTCy = hn5VXcCqOGp[MiLdk52x] - hn5VXcCqOGp[xg60ecLzTyq];
                    UrpEVeN = rkAWbcfZ[MiLdk52x] - rkAWbcfZ[xg60ecLzTyq];
                    c = WI8EjiMN[MiLdk52x] - WI8EjiMN[xg60ecLzTyq];
                    xg60ecLzTyq = xg60ecLzTyq + 1;
                    w1zRQIhZGKsl[Zr0eaV5] = sqrt (1.0 * wAFaWf5GDTCy * wAFaWf5GDTCy + UrpEVeN *UrpEVeN+c * c);
                    Zr0eaV5 = Zr0eaV5 +1;
                }
            }
            MiLdk52x = MiLdk52x +1;
        }
    }
    {
        MiLdk52x = 1;
        while (MiLdk52x <= cQXhuYU5om) {
            {
                xg60ecLzTyq = 0;
                while (xg60ecLzTyq < cQXhuYU5om - MiLdk52x) {
                    if (w1zRQIhZGKsl[xg60ecLzTyq] > w1zRQIhZGKsl[xg60ecLzTyq + 1]) {
                        e = w1zRQIhZGKsl[xg60ecLzTyq + 1];
                        w1zRQIhZGKsl[xg60ecLzTyq + 1] = w1zRQIhZGKsl[xg60ecLzTyq];
                        w1zRQIhZGKsl[xg60ecLzTyq] = e;
                    }
                    xg60ecLzTyq = xg60ecLzTyq + 1;
                }
            }
            MiLdk52x = MiLdk52x +1;
        }
    }
    E0fQC7sVq[0] = w1zRQIhZGKsl[0];
    {
        MiLdk52x = 1;
        while (MiLdk52x < cQXhuYU5om) {
            if (w1zRQIhZGKsl[MiLdk52x] == w1zRQIhZGKsl[MiLdk52x -1]) {
                continue;
            }
            else {
                E0fQC7sVq[sxcHQXi7] = w1zRQIhZGKsl[MiLdk52x];
                sxcHQXi7++;
            }
            MiLdk52x++;
        }
    }
    {
        USmyMdAhpU = sxcHQXi7 - 1;
        while (USmyMdAhpU >= 0) {
            {
                MiLdk52x = 0;
                while (MiLdk52x < n) {
                    {
                        xg60ecLzTyq = MiLdk52x +1;
                        while (xg60ecLzTyq < n) {
                            wAFaWf5GDTCy = hn5VXcCqOGp[MiLdk52x] - hn5VXcCqOGp[xg60ecLzTyq];
                            UrpEVeN = rkAWbcfZ[MiLdk52x] - rkAWbcfZ[xg60ecLzTyq];
                            c = WI8EjiMN[MiLdk52x] - WI8EjiMN[xg60ecLzTyq];
                            d = sqrt (1.0 * wAFaWf5GDTCy * wAFaWf5GDTCy + UrpEVeN *UrpEVeN+c * c);
                            if (d == E0fQC7sVq[USmyMdAhpU]) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", hn5VXcCqOGp[MiLdk52x], rkAWbcfZ[MiLdk52x], WI8EjiMN[MiLdk52x], hn5VXcCqOGp[xg60ecLzTyq], rkAWbcfZ[xg60ecLzTyq], WI8EjiMN[xg60ecLzTyq], d);
                            }
                            xg60ecLzTyq = xg60ecLzTyq + 1;
                        }
                    }
                    MiLdk52x++;
                }
            }
            USmyMdAhpU = USmyMdAhpU -1;
        }
    }
    return 0;
}

