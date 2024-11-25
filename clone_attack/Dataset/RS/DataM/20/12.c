void  aX6rNT1 (int Ga2iDW, char qdxotpREs5 [(1015 - 15)]) {
    int lmC2oJyHe [10];
    int dFlLbyeCHEXo [10];
    char lin1 [(903 - 893)] [10], lin2 [10] [3], lin3 [10] [13];
    int ISpIq4dl;
    int e1tbRF;
    int lP5DHRk;
    int OTj7w91iYn;
    ISpIq4dl = (846 - 846);
    e1tbRF = 0;
    lP5DHRk = 0;
    for (OTj7w91iYn = 0; OTj7w91iYn < 10; OTj7w91iYn = OTj7w91iYn +1)
        dFlLbyeCHEXo[OTj7w91iYn] = 0;
    for (OTj7w91iYn = 0; OTj7w91iYn < Ga2iDW; OTj7w91iYn = OTj7w91iYn +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (qdxotpREs5[OTj7w91iYn] != 32) {
            if (!(0 != lP5DHRk)) {
                lmC2oJyHe[e1tbRF] = 0;
                for (ISpIq4dl = 0; qdxotpREs5[OTj7w91iYn] != 32 && OTj7w91iYn < Ga2iDW; OTj7w91iYn++, ISpIq4dl = ISpIq4dl +1) {
                    lin1[e1tbRF][ISpIq4dl] = qdxotpREs5[OTj7w91iYn];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    lmC2oJyHe[e1tbRF]++;
                }
                lP5DHRk = 1;
                continue;
            }
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
            if (lP5DHRk == 1) {
                lP5DHRk = 0;
                {
                    ISpIq4dl = 0;
                    while (ISpIq4dl < 3) {
                        lin2[e1tbRF][ISpIq4dl] = qdxotpREs5[OTj7w91iYn];
                        OTj7w91iYn = OTj7w91iYn +1;
                        ISpIq4dl++;
                    };
                }
                e1tbRF++;
                OTj7w91iYn--;
            };
        };
    }
    for (OTj7w91iYn = 0; OTj7w91iYn < e1tbRF; OTj7w91iYn++)
        dFlLbyeCHEXo[OTj7w91iYn] = lin1[OTj7w91iYn][0];
    for (OTj7w91iYn = 0; OTj7w91iYn < e1tbRF; OTj7w91iYn++) {
        for (ISpIq4dl = 1; lmC2oJyHe[OTj7w91iYn] > ISpIq4dl; ISpIq4dl = ISpIq4dl +1)
            if (lin1[OTj7w91iYn][ISpIq4dl] > dFlLbyeCHEXo[OTj7w91iYn])
                dFlLbyeCHEXo[OTj7w91iYn] = lin1[OTj7w91iYn][ISpIq4dl];
    }
    {
        OTj7w91iYn = 0;
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
        while (OTj7w91iYn < e1tbRF) {
            for (ISpIq4dl = 0; ISpIq4dl < lmC2oJyHe[OTj7w91iYn]; ISpIq4dl = ISpIq4dl +1) {
                lin3[OTj7w91iYn][ISpIq4dl] = lin1[OTj7w91iYn][ISpIq4dl];
                if (lin1[OTj7w91iYn][ISpIq4dl] == dFlLbyeCHEXo[OTj7w91iYn]) {
                    lin3[OTj7w91iYn][ISpIq4dl +1] = lin2[OTj7w91iYn][0];
                    lin3[OTj7w91iYn][ISpIq4dl +2] = lin2[OTj7w91iYn][1];
                    lin3[OTj7w91iYn][ISpIq4dl +3] = lin2[OTj7w91iYn][2];
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
                    for (ISpIq4dl = ISpIq4dl +1; ISpIq4dl < lmC2oJyHe[OTj7w91iYn]; ISpIq4dl++)
                        lin3[OTj7w91iYn][ISpIq4dl +3] = lin1[OTj7w91iYn][ISpIq4dl];
                    break;
                };
            }
            OTj7w91iYn = OTj7w91iYn +1;
        };
    }
    for (OTj7w91iYn = 0; OTj7w91iYn < e1tbRF; OTj7w91iYn++) {
        for (ISpIq4dl = 0; ISpIq4dl < lmC2oJyHe[OTj7w91iYn] + 3; ISpIq4dl++)
            printf ("%c", lin3[OTj7w91iYn][ISpIq4dl]);
        printf ("\n");
    };
}

main () {
    char qdxotpREs5 [100] [100];
    int Ga2iDW [100];
    int OTj7w91iYn;
    int ISpIq4dl;
    {
        OTj7w91iYn = 0;
        while (OTj7w91iYn < 100) {
            gets (qdxotpREs5 [OTj7w91iYn]);
            Ga2iDW[OTj7w91iYn] = strlen (qdxotpREs5[OTj7w91iYn]);
            if (Ga2iDW[OTj7w91iYn] == 0)
                break;
            OTj7w91iYn++;
        };
    }
    ISpIq4dl = OTj7w91iYn;
    for (OTj7w91iYn = 0; OTj7w91iYn < ISpIq4dl; OTj7w91iYn++)
        aX6rNT1 (Ga2iDW[OTj7w91iYn], qdxotpREs5[OTj7w91iYn]);
}

