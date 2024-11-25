int main () {
    double  cug5mwrsJKI = 0;
    int GyhR4dnup [100] [100];
    int fYWNJh90wOm, Zrwqjh3N79V, bCIUtNT3g, YrInmliwTaB, iyI9vgDpfe, LKunNkQepx = 0, vSAtGr8bn7, KTqrjzpD;
    scanf ("%d %d", &bCIUtNT3g, &YrInmliwTaB);
    {
        fYWNJh90wOm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bCIUtNT3g > fYWNJh90wOm) {
            {
                Zrwqjh3N79V = 0;
                while (YrInmliwTaB > Zrwqjh3N79V) {
                    scanf ("%d", &GyhR4dnup[fYWNJh90wOm][Zrwqjh3N79V]);
                    Zrwqjh3N79V++;
                };
            }
            fYWNJh90wOm = fYWNJh90wOm + 1;
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
    fYWNJh90wOm = 0;
    for (Zrwqjh3N79V = 0; YrInmliwTaB > Zrwqjh3N79V; Zrwqjh3N79V++) {
        LKunNkQepx = LKunNkQepx +1;
        if (LKunNkQepx == bCIUtNT3g * YrInmliwTaB)
            return 0;
        printf ("%d\n", GyhR4dnup[fYWNJh90wOm][Zrwqjh3N79V]);
    }
    fYWNJh90wOm = 0;
    Zrwqjh3N79V = YrInmliwTaB -1;
    {
        iyI9vgDpfe = 1;
        while (iyI9vgDpfe > 0) {
            {
                vSAtGr8bn7 = bCIUtNT3g - iyI9vgDpfe;
                while (vSAtGr8bn7 > 0) {
                    LKunNkQepx = LKunNkQepx +1;
                    if (LKunNkQepx == bCIUtNT3g * YrInmliwTaB)
                        return 0;
                    fYWNJh90wOm = fYWNJh90wOm + (int) pow (-1, cug5mwrsJKI);
                    printf ("%d\n", GyhR4dnup[fYWNJh90wOm][Zrwqjh3N79V]);
                    vSAtGr8bn7--;
                };
            }
            {
                vSAtGr8bn7 = YrInmliwTaB -iyI9vgDpfe;
                while (vSAtGr8bn7 > 0) {
                    LKunNkQepx++;
                    if (LKunNkQepx == bCIUtNT3g * YrInmliwTaB)
                        return 0;
                    vSAtGr8bn7--;
                    Zrwqjh3N79V += (int) pow (-1, cug5mwrsJKI + 1);
                    printf ("%d\n", GyhR4dnup[fYWNJh90wOm][Zrwqjh3N79V]);
                };
            }
            cug5mwrsJKI = cug5mwrsJKI + 1;
            iyI9vgDpfe++;
        };
    };
}

