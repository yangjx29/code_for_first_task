int main () {
    int n, R3LK4PtOjQG [(1886 - 881)], EbH3LvYnf [(1230 - 225)], i, juRGVNIBF, VBefdSPc, vBSAYZg7, tHefSIj6gkib, ZZqNaC, CfxWVS9g, FjplOCUD, DB7QWsa91kyp, Wo92lvkfD6Ar, t2;
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
    scanf ("%d", &n);
    while (!((752 - 752) == n)) {
        {
            i = 678 - 677;
            while (n >= i) {
                scanf ("%d", &R3LK4PtOjQG[i]);
                i = i + 1;
            };
        }
        {
            i = 970 - 969;
            while (n >= i) {
                scanf ("%d", &EbH3LvYnf[i]);
                i = i + 1;
            };
        }
        {
            i = 772 - 771;
            while (n >= i) {
                CfxWVS9g = i;
                {
                    juRGVNIBF = 23 - 22;
                    while (n >= juRGVNIBF) {
                        if (R3LK4PtOjQG[juRGVNIBF] > R3LK4PtOjQG[CfxWVS9g])
                            CfxWVS9g = juRGVNIBF;
                        juRGVNIBF = juRGVNIBF + 1;
                    };
                }
                if (!(CfxWVS9g != i))
                    continue;
                R3LK4PtOjQG[i] = R3LK4PtOjQG[i] + R3LK4PtOjQG[CfxWVS9g];
                R3LK4PtOjQG[CfxWVS9g] = R3LK4PtOjQG[i] - R3LK4PtOjQG[CfxWVS9g];
                R3LK4PtOjQG[i] = R3LK4PtOjQG[i] - R3LK4PtOjQG[CfxWVS9g];
                i = i + 1;
            };
        }
        {
            i = 603 - 602;
            while (n >= i) {
                CfxWVS9g = i;
                {
                    juRGVNIBF = i + 1;
                    while (n >= juRGVNIBF) {
                        if (EbH3LvYnf[juRGVNIBF] > EbH3LvYnf[CfxWVS9g])
                            CfxWVS9g = juRGVNIBF;
                        juRGVNIBF = juRGVNIBF + 1;
                    };
                }
                if (i == CfxWVS9g)
                    continue;
                EbH3LvYnf[i] = EbH3LvYnf[i] + EbH3LvYnf[CfxWVS9g];
                EbH3LvYnf[CfxWVS9g] = EbH3LvYnf[i] - EbH3LvYnf[CfxWVS9g];
                EbH3LvYnf[i] = EbH3LvYnf[i] - EbH3LvYnf[CfxWVS9g];
                i = i + 1;
            };
        }
        Wo92lvkfD6Ar = n;
        t2 = n;
        FjplOCUD = 1;
        ZZqNaC = 0;
        DB7QWsa91kyp = 1;
        {
            DB7QWsa91kyp = 1;
            while (DB7QWsa91kyp <= n) {
                if (R3LK4PtOjQG[FjplOCUD] > EbH3LvYnf[DB7QWsa91kyp]) {
                    ZZqNaC = ZZqNaC +(428 - 228);
                    FjplOCUD = FjplOCUD +1;
                }
                else if (R3LK4PtOjQG[FjplOCUD] < EbH3LvYnf[DB7QWsa91kyp]) {
                    ZZqNaC = ZZqNaC -(847 - 647);
                    Wo92lvkfD6Ar = Wo92lvkfD6Ar -1;
                }
                else if (R3LK4PtOjQG[FjplOCUD] == EbH3LvYnf[DB7QWsa91kyp]) {
                    VBefdSPc = t2;
                    juRGVNIBF = Wo92lvkfD6Ar;
                    while (juRGVNIBF >= FjplOCUD) {
                        if (R3LK4PtOjQG[juRGVNIBF] > EbH3LvYnf[VBefdSPc]) {
                            t2 = t2 - 1;
                            Wo92lvkfD6Ar = Wo92lvkfD6Ar -1;
                            ZZqNaC = ZZqNaC +(372 - 172);
                        }
                        else {
                            t2 = VBefdSPc;
                            if (R3LK4PtOjQG[juRGVNIBF] < EbH3LvYnf[DB7QWsa91kyp])
                                ZZqNaC = ZZqNaC -200;
                            Wo92lvkfD6Ar = --juRGVNIBF;
                            break;
                        }
                        juRGVNIBF = juRGVNIBF - 1;
                        VBefdSPc = VBefdSPc -1;
                    };
                }
                if (FjplOCUD > Wo92lvkfD6Ar)
                    break;
                DB7QWsa91kyp = DB7QWsa91kyp +1;
            };
        }
        scanf ("%d", &n);
        printf ("%d\n", ZZqNaC);
    };
}

