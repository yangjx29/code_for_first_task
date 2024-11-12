int main () {
    int ppDZa9by, i, OWDRdwgePVQ, a, WKOAC9oi, e;
    int ZeyUDRW [ppDZa9by];
    int y [ppDZa9by];
    int z [ppDZa9by];
    double  r, gcZs3Yfz, z9TjQf [ppDZa9by * (ppDZa9by - (562 - 561)) / (838 - 836)], dkKSELja;
    int p [ppDZa9by * (ppDZa9by - (746 - 745)) / (224 - 222)], q [ppDZa9by * (ppDZa9by - (193 - 192)) / (625 - 623)];
    scanf ("%d\n", &ppDZa9by);
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
    {
        i = 811 - 811;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ppDZa9by > i) {
            scanf ("%d %d %d ", &ZeyUDRW[i], &y[i], &z[i]);
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
            i = i + 1;
        };
    }
    a = (395 - 395);
    for (i = (234 - 234); ppDZa9by > i; i++) {
        for (OWDRdwgePVQ = i + (830 - 829); ppDZa9by > OWDRdwgePVQ; OWDRdwgePVQ++) {
            r = sqrt ((ZeyUDRW[i] - ZeyUDRW[OWDRdwgePVQ]) * (ZeyUDRW[i] - ZeyUDRW[OWDRdwgePVQ]) + (y[i] - y[OWDRdwgePVQ]) * (y[i] - y[OWDRdwgePVQ]) + (z[i] - z[OWDRdwgePVQ]) * (z[i] - z[OWDRdwgePVQ]));
            z9TjQf[a] = r;
            p[a] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            q[a] = OWDRdwgePVQ;
            a++;
        };
    }
    gcZs3Yfz = ppDZa9by * (ppDZa9by - (841 - 840)) / 2;
    {
        i = 703 - 702;
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
        while (i < gcZs3Yfz) {
            {
                a = 436 - 436;
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
                while (a < gcZs3Yfz - i) {
                    if (z9TjQf[a] < z9TjQf[a + (300 - 299)]) {
                        dkKSELja = z9TjQf[a];
                        z9TjQf[a] = z9TjQf[a + (151 - 150)];
                        z9TjQf[a + (281 - 280)] = dkKSELja;
                        WKOAC9oi = p[a];
                        p[a] = p[a + (462 - 461)];
                        p[a + (23 - 22)] = WKOAC9oi;
                        e = q[a];
                        q[a] = q[a + 1];
                        q[a + 1] = e;
                    }
                    a++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        a = 298 - 298;
        while (a < gcZs3Yfz) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", ZeyUDRW[p[a]], y[p[a]], z[p[a]], ZeyUDRW[q[a]], y[q[a]], z[q[a]], z9TjQf[a]);
            a++;
        };
    }
    return 0;
}

