int main () {
    int p, Cd1y5Wb8vH, w = 0;
    int min;
    int CxLHnE;
    min = 10000;
    CxLHnE = 0;
    int chvG1QoM9 = 0, i = 0;
    int pzBwAxu;
    int LFasuz2;
    int tRt85YyPqcM3;
    int col;
    int JqxzyACNG [8] [8];
    int M8PiEovTfl [8];
    int y1 [8];
    int x2 [8];
    int y2 [8];
    scanf ("%d,%d", &tRt85YyPqcM3, &col);
    {
        pzBwAxu = 0;
        while (tRt85YyPqcM3 > pzBwAxu) {
            {
                LFasuz2 = 0;
                while (col > LFasuz2) {
                    scanf ("%d", &JqxzyACNG[pzBwAxu][LFasuz2]);
                    LFasuz2 = LFasuz2 +1;
                };
            }
            pzBwAxu++;
        };
    }
    {
        pzBwAxu = 0;
        while (tRt85YyPqcM3 > pzBwAxu) {
            for (LFasuz2 = 0; col > LFasuz2; LFasuz2++) {
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
                if (chvG1QoM9 < JqxzyACNG[pzBwAxu][LFasuz2]) {
                    chvG1QoM9 = JqxzyACNG[pzBwAxu][LFasuz2];
                    M8PiEovTfl[i] = pzBwAxu;
                    y1[i] = LFasuz2;
                };
            }
            pzBwAxu++;
            chvG1QoM9 = 0;
            i = i + 1;
        };
    }
    {
        LFasuz2 = 0;
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
        while (col > LFasuz2) {
            {
                pzBwAxu = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (tRt85YyPqcM3 > pzBwAxu) {
                    if (min > JqxzyACNG[pzBwAxu][LFasuz2]) {
                        min = JqxzyACNG[pzBwAxu][LFasuz2];
                        x2[CxLHnE] = pzBwAxu;
                        y2[CxLHnE] = LFasuz2;
                    }
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
                    pzBwAxu++;
                };
            }
            LFasuz2 = LFasuz2 +1;
            min = 10000;
            CxLHnE++;
        };
    }
    {
        p = 0;
        while (tRt85YyPqcM3 > p) {
            {
                Cd1y5Wb8vH = 0;
                while (CxLHnE > Cd1y5Wb8vH) {
                    if ((!(x2[Cd1y5Wb8vH] != M8PiEovTfl[p])) && (y1[p] == y2[Cd1y5Wb8vH])) {
                        w++;
                        printf ("%d+%d", p, Cd1y5Wb8vH);
                    }
                    Cd1y5Wb8vH = Cd1y5Wb8vH +1;
                };
            }
            p++;
        };
    }
    if (w == 0) {
    }
    return 0;
}

