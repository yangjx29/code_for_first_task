void  main () {
    int gpi0usNP [8] = {(290 - 290)};
    int Htfc8mSAnB [8] = {(346 - 346)};
    int DTcD0tBLJ;
    int AfeltrC7L;
    int m;
    int n;
    int vMHwBaZy34;
    int tjH531BlJP;
    int jUhiKG;
    int Jx1LD4SI8JqR [8] [8];
    vMHwBaZy34 = 0;
    tjH531BlJP = 0;
    scanf ("%d,%d", &n, &m);
    {
        DTcD0tBLJ = 913 - 912;
        while (n >= DTcD0tBLJ) {
            for (AfeltrC7L = (738 - 737); m >= AfeltrC7L; AfeltrC7L++) {
                scanf ("%d", &Jx1LD4SI8JqR[DTcD0tBLJ][AfeltrC7L]);
            }
            DTcD0tBLJ = DTcD0tBLJ +1;
        };
    }
    for (DTcD0tBLJ = 1; n >= DTcD0tBLJ; DTcD0tBLJ = DTcD0tBLJ +1) {
        AfeltrC7L = 1;
        while (AfeltrC7L <= m) {
            if (gpi0usNP[DTcD0tBLJ] < Jx1LD4SI8JqR[DTcD0tBLJ][AfeltrC7L]) {
                gpi0usNP[DTcD0tBLJ] = Jx1LD4SI8JqR[DTcD0tBLJ][AfeltrC7L];
                Htfc8mSAnB[DTcD0tBLJ] = AfeltrC7L;
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
            AfeltrC7L++;
        };
    }
    for (DTcD0tBLJ = 1; DTcD0tBLJ <= n; DTcD0tBLJ++) {
        vMHwBaZy34 = 0;
        jUhiKG = Htfc8mSAnB[DTcD0tBLJ];
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
            AfeltrC7L = 1;
            while (AfeltrC7L <= n) {
                if (gpi0usNP[DTcD0tBLJ] > Jx1LD4SI8JqR[AfeltrC7L][jUhiKG])
                    vMHwBaZy34 = 1;
                AfeltrC7L++;
            };
        }
        if (vMHwBaZy34 == 0) {
            printf ("%d+%d", DTcD0tBLJ -1, jUhiKG - 1);
            tjH531BlJP = 1;
        };
    }
    if (tjH531BlJP == 0)
        ;
}

