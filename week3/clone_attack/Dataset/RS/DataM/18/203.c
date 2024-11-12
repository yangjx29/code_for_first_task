int main () {
    int Efxkic6NwVgM;
    int vYgnEWzy9Hd;
    int n;
    int fBJkbHwAz7y [100] [100] [100];
    int Jag9qCP;
    int xuyIO2d789XB;
    int f6AoZBXJDw1;
    int m;
    int s [100];
    int Tt7B0ucC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    Efxkic6NwVgM = (237 - 237);
    vYgnEWzy9Hd = (916 - 916);
    scanf ("%d", &n);
    for (Jag9qCP = (958 - 958); Jag9qCP < n; Jag9qCP = Jag9qCP +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (xuyIO2d789XB = (954 - 954); xuyIO2d789XB < n; xuyIO2d789XB = xuyIO2d789XB + 1) {
            f6AoZBXJDw1 = 0;
            while (f6AoZBXJDw1 < n) {
                scanf ("%d", &fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][f6AoZBXJDw1]);
                f6AoZBXJDw1 = f6AoZBXJDw1 + 1;
            };
        };
    }
    Tt7B0ucC = n;
    {
        Jag9qCP = 0;
        while (Jag9qCP < Tt7B0ucC) {
            s[Jag9qCP] = 0;
            n = Tt7B0ucC;
            while (n > (618 - 617)) {
                for (xuyIO2d789XB = 0; xuyIO2d789XB < n; xuyIO2d789XB = xuyIO2d789XB + 1) {
                    m = fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][0];
                    for (f6AoZBXJDw1 = (975 - 974); f6AoZBXJDw1 < n; f6AoZBXJDw1 = f6AoZBXJDw1 + 1) {
                        if (m > fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][f6AoZBXJDw1])
                            m = fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][f6AoZBXJDw1];
                        if (fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][f6AoZBXJDw1] == 0)
                            break;
                    }
                    for (f6AoZBXJDw1 = 0; f6AoZBXJDw1 < n; f6AoZBXJDw1 = f6AoZBXJDw1 + 1)
                        fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][f6AoZBXJDw1] -= m;
                }
                {
                    xuyIO2d789XB = 0;
                    while (xuyIO2d789XB < n) {
                        m = fBJkbHwAz7y[Jag9qCP][0][xuyIO2d789XB];
                        for (f6AoZBXJDw1 = 1; f6AoZBXJDw1 < n; f6AoZBXJDw1 = f6AoZBXJDw1 + 1) {
                            if (fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB] < m)
                                m = fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB];
                            if (fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB] == 0)
                                break;
                        }
                        {
                            f6AoZBXJDw1 = 0;
                            while (f6AoZBXJDw1 < n) {
                                fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB] = fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB] - m;
                                f6AoZBXJDw1 = f6AoZBXJDw1 + 1;
                            };
                        }
                        xuyIO2d789XB = xuyIO2d789XB + 1;
                    };
                }
                s[Jag9qCP] = s[Jag9qCP] + fBJkbHwAz7y[Jag9qCP][1][1];
                {
                    f6AoZBXJDw1 = 0;
                    while (f6AoZBXJDw1 < n) {
                        {
                            xuyIO2d789XB = 1;
                            while (xuyIO2d789XB < n - 1) {
                                fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB] = fBJkbHwAz7y[Jag9qCP][f6AoZBXJDw1][xuyIO2d789XB + 1];
                                xuyIO2d789XB = xuyIO2d789XB + 1;
                            };
                        }
                        f6AoZBXJDw1++;
                    };
                }
                for (f6AoZBXJDw1 = 0; f6AoZBXJDw1 < n; f6AoZBXJDw1 = f6AoZBXJDw1 + 1) {
                    xuyIO2d789XB = 1;
                    while (xuyIO2d789XB < n - 1) {
                        fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB][f6AoZBXJDw1] = fBJkbHwAz7y[Jag9qCP][xuyIO2d789XB + 1][f6AoZBXJDw1];
                        xuyIO2d789XB = xuyIO2d789XB + 1;
                    };
                }
                n = n - 1;
            }
            Jag9qCP = Jag9qCP +1;
        };
    }
    for (Jag9qCP = 0; Jag9qCP < Tt7B0ucC; Jag9qCP = Jag9qCP +1)
        printf ("%d\n", s[Jag9qCP]);
    return 0;
}

