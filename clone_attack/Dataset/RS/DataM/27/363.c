void  main () {
    int LNleUhpw;
    double  lEPdjF7g, Ak16Bh, c, AoO7yRvFDmC, BpNScof, d, V1nAH7e30;
    scanf ("%d\n", &LNleUhpw);
    for (; 1 <= LNleUhpw; LNleUhpw = LNleUhpw -1) {
        scanf ("%lf %lf %lf", &lEPdjF7g, &Ak16Bh, &c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((sqrt (Ak16Bh *Ak16Bh-4 * lEPdjF7g * c)) > 0) {
            AoO7yRvFDmC = (-Ak16Bh+sqrt (Ak16Bh *Ak16Bh-4 * lEPdjF7g * c)) / (2 * lEPdjF7g);
            BpNScof = (-Ak16Bh-sqrt (Ak16Bh *Ak16Bh-4 * lEPdjF7g * c)) / (2 * lEPdjF7g);
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
            printf ("x1=%.5f;x2=%.5f\n", AoO7yRvFDmC, BpNScof);
        }
        else {
            if ((sqrt (Ak16Bh *Ak16Bh-4 * lEPdjF7g * c)) == 0) {
                AoO7yRvFDmC = -Ak16Bh / (2 * lEPdjF7g);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("x1=x2=%.5f\n", AoO7yRvFDmC);
            }
            else {
                d = -Ak16Bh / (2 * lEPdjF7g);
                V1nAH7e30 = sqrt (-(Ak16Bh *Ak16Bh-4 * lEPdjF7g * c)) / (2 * lEPdjF7g);
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
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", d, V1nAH7e30, d, V1nAH7e30);
            };
        };
    };
}

