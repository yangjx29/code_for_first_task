int main () {
    int n;
    int MwmqzVO1s;
    int Dw4t6s;
    int gBpWqbFw;
    int v6WuVeFEpaHx;
    int yyI1wc;
    int e;
    int xjLz0I4xCSp8;
    int UbY73F2Heo [(515 - 504)], ehaPJ7 [(163 - 152)], sc [(53 - 42)];
    int s [(519 - 468)];
    int y [(452 - 401)];
    int z [(792 - 741)];
    double  l [51];
    double  rh1NxA;
    scanf ("%d", &n);
    {
        gBpWqbFw = 347 - 347;
        while (n > gBpWqbFw) {
            scanf ("%d%d%d", &UbY73F2Heo[gBpWqbFw], &ehaPJ7[gBpWqbFw], &sc[gBpWqbFw]);
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
            gBpWqbFw = gBpWqbFw + 1;
        };
    }
    gBpWqbFw = (160 - 160);
    for (v6WuVeFEpaHx = (30 - 30); n - (235 - 234) > v6WuVeFEpaHx; v6WuVeFEpaHx = v6WuVeFEpaHx + 1) {
        yyI1wc = 583 - 582;
        while (n > yyI1wc) {
            s[gBpWqbFw] = (UbY73F2Heo[v6WuVeFEpaHx] - UbY73F2Heo[yyI1wc]) * (UbY73F2Heo[v6WuVeFEpaHx] - UbY73F2Heo[yyI1wc]) + (ehaPJ7[v6WuVeFEpaHx] - ehaPJ7[yyI1wc]) * (ehaPJ7[v6WuVeFEpaHx] - ehaPJ7[yyI1wc]) + (sc[v6WuVeFEpaHx] - sc[yyI1wc]) * (sc[v6WuVeFEpaHx] - sc[yyI1wc]);
            l[gBpWqbFw] = sqrt (s[gBpWqbFw]);
            y[gBpWqbFw] = v6WuVeFEpaHx;
            z[gBpWqbFw] = yyI1wc;
            yyI1wc = yyI1wc + 1;
            gBpWqbFw = gBpWqbFw + 1;
        };
    }
    {
        gBpWqbFw = 463 - 462;
        while ((n * (n - (213 - 212)) / (818 - 816)) >= gBpWqbFw) {
            {
                v6WuVeFEpaHx = 0;
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
                while (v6WuVeFEpaHx < (n * (n - 1) / (557 - 555) - gBpWqbFw)) {
                    if (l[v6WuVeFEpaHx + 1] > l[v6WuVeFEpaHx]) {
                        rh1NxA = l[v6WuVeFEpaHx];
                        l[v6WuVeFEpaHx] = l[v6WuVeFEpaHx + 1];
                        l[v6WuVeFEpaHx + 1] = rh1NxA;
                        e = y[v6WuVeFEpaHx];
                        y[v6WuVeFEpaHx] = y[v6WuVeFEpaHx + 1];
                        y[v6WuVeFEpaHx + 1] = e;
                        xjLz0I4xCSp8 = z[v6WuVeFEpaHx];
                        z[v6WuVeFEpaHx] = z[v6WuVeFEpaHx + 1];
                        z[v6WuVeFEpaHx + 1] = xjLz0I4xCSp8;
                    }
                    v6WuVeFEpaHx = v6WuVeFEpaHx + 1;
                };
            }
            gBpWqbFw = gBpWqbFw + 1;
        };
    }
    {
        gBpWqbFw = 0;
        while (gBpWqbFw < (n * (n - 1) / 2)) {
            MwmqzVO1s = y[gBpWqbFw];
            Dw4t6s = z[gBpWqbFw];
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", UbY73F2Heo[MwmqzVO1s], ehaPJ7[MwmqzVO1s], sc[MwmqzVO1s], UbY73F2Heo[Dw4t6s], ehaPJ7[Dw4t6s], sc[Dw4t6s], l[gBpWqbFw]);
            gBpWqbFw++;
        };
    }
    return 0;
}

