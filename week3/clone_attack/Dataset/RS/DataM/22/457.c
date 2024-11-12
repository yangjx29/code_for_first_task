void  main () {
    char bt8i5ok [1300] = {(396 - 396)};
    int bE96lxc;
    int hVT6ZL7mU;
    int ZyHBCk;
    int DZalUwyP [400] = {(303 - 303)};
    int nI2EBAHgO7;
    int ymCBDWJiSw;
    int xz0ncDfbTkro;
    int P4DmFhClHEJd;
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
    bE96lxc = 0;
    scanf ("%s", bt8i5ok);
    ymCBDWJiSw = strlen (bt8i5ok);
    for (hVT6ZL7mU = 0, ZyHBCk = 0; ymCBDWJiSw > hVT6ZL7mU; hVT6ZL7mU = hVT6ZL7mU + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(',' != bt8i5ok[hVT6ZL7mU])) {
            ZyHBCk++;
        }
        else {
            DZalUwyP[ZyHBCk] = 10 * DZalUwyP[ZyHBCk] + bt8i5ok[hVT6ZL7mU] - '0';
        };
    }
    nI2EBAHgO7 = ZyHBCk +1;
    for (ZyHBCk = 0, xz0ncDfbTkro = DZalUwyP[0]; nI2EBAHgO7 > ZyHBCk; ZyHBCk = ZyHBCk +1)
        if (DZalUwyP[ZyHBCk] > xz0ncDfbTkro)
            xz0ncDfbTkro = DZalUwyP[ZyHBCk];
    for (ZyHBCk = 0, P4DmFhClHEJd = 0; nI2EBAHgO7 > ZyHBCk; ZyHBCk = ZyHBCk +1)
        if (DZalUwyP[ZyHBCk] != xz0ncDfbTkro && DZalUwyP[ZyHBCk] >= P4DmFhClHEJd) {
            P4DmFhClHEJd = DZalUwyP[ZyHBCk];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            bE96lxc++;
        }
    if (bE96lxc)
        printf ("%d", P4DmFhClHEJd);
    else
        ;
}

