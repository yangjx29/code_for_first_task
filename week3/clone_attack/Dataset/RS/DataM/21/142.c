void  main () {
    int FvkGwprAj2Zg;
    int l;
    int UGmpq6znD;
    int yPS3TWMJ;
    int otNyM0 [400];
    int KNVBkgTOR6v [400];
    int TjK15x4pz8WF;
    int Tlw3QNM;
    FvkGwprAj2Zg = (76 - 76);
    l = (909 - 909);
    float mkDfXuU;
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
    float WsV05Z;
    float kL6ZBT1QalIW;
    mkDfXuU = (948 - 948);
    WsV05Z = (49 - 49);
    scanf ("%d", &UGmpq6znD);
    {
        yPS3TWMJ = 0;
        while (yPS3TWMJ < UGmpq6znD) {
            scanf ("%d", &otNyM0[yPS3TWMJ]);
            mkDfXuU = mkDfXuU + otNyM0[yPS3TWMJ];
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
            yPS3TWMJ = yPS3TWMJ + 1;
        };
    }
    mkDfXuU = mkDfXuU / UGmpq6znD;
    {
        yPS3TWMJ = 0;
        while (yPS3TWMJ < UGmpq6znD) {
            kL6ZBT1QalIW = otNyM0[yPS3TWMJ] - mkDfXuU;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            yPS3TWMJ = yPS3TWMJ + 1;
            if ((WsV05Z >= 0) && (kL6ZBT1QalIW >= WsV05Z || kL6ZBT1QalIW <= -WsV05Z)) {
                WsV05Z = kL6ZBT1QalIW;
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if ((WsV05Z < 0) && (kL6ZBT1QalIW <= WsV05Z || kL6ZBT1QalIW >= -WsV05Z)) {
                    WsV05Z = kL6ZBT1QalIW;
                };
            };
        };
    }
    {
        yPS3TWMJ = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (yPS3TWMJ < UGmpq6znD) {
            kL6ZBT1QalIW = otNyM0[yPS3TWMJ] - mkDfXuU;
            if (kL6ZBT1QalIW == WsV05Z || kL6ZBT1QalIW == -WsV05Z) {
                KNVBkgTOR6v[FvkGwprAj2Zg] = otNyM0[yPS3TWMJ];
                FvkGwprAj2Zg = FvkGwprAj2Zg +1;
            }
            yPS3TWMJ = yPS3TWMJ + 1;
        };
    }
    {
        yPS3TWMJ = 0;
        while (yPS3TWMJ < FvkGwprAj2Zg) {
            {
                TjK15x4pz8WF = 0;
                while (TjK15x4pz8WF < yPS3TWMJ) {
                    if (KNVBkgTOR6v[TjK15x4pz8WF] >= KNVBkgTOR6v[yPS3TWMJ]) {
                        Tlw3QNM = KNVBkgTOR6v[TjK15x4pz8WF];
                        KNVBkgTOR6v[TjK15x4pz8WF] = KNVBkgTOR6v[yPS3TWMJ];
                        KNVBkgTOR6v[yPS3TWMJ] = Tlw3QNM;
                    }
                    TjK15x4pz8WF = TjK15x4pz8WF +1;
                };
            }
            yPS3TWMJ = yPS3TWMJ + 1;
        };
    }
    {
        yPS3TWMJ = 0;
        while (yPS3TWMJ < FvkGwprAj2Zg) {
            if (yPS3TWMJ != FvkGwprAj2Zg -(357 - 356))
                printf ("%d,", KNVBkgTOR6v[yPS3TWMJ]);
            else
                printf ("%d", KNVBkgTOR6v[yPS3TWMJ]);
            yPS3TWMJ = yPS3TWMJ + 1;
        };
    };
}

