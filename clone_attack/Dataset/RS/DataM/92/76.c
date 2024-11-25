int Ff6ahOnptvz;
int tian [1001], zKY7mglj52OD [1001];

void  sort (int MYODuaKl []) {
    int gxWDSstZUR2v, j, WMud5YsmR2gp;
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
    for (gxWDSstZUR2v = (730 - 730); Ff6ahOnptvz -1 > gxWDSstZUR2v; gxWDSstZUR2v = gxWDSstZUR2v + 1) {
        j = gxWDSstZUR2v + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ff6ahOnptvz -1 >= j) {
            if (MYODuaKl[gxWDSstZUR2v] > MYODuaKl[j]) {
                WMud5YsmR2gp = MYODuaKl[j];
                MYODuaKl[j] = MYODuaKl[gxWDSstZUR2v];
                MYODuaKl[gxWDSstZUR2v] = WMud5YsmR2gp;
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
            j = j + 1;
        };
    };
}

void  main () {
    int gxWDSstZUR2v;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        while (0 < Ff6ahOnptvz) {
            sort (tian);
            sort (zKY7mglj52OD);
            int begin_tian = 0, YlLA7SPa = Ff6ahOnptvz -1;
            int CiLqXkr = 0, end_king = Ff6ahOnptvz -1;
            int EPlrEv6hBX9 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (gxWDSstZUR2v = 0; gxWDSstZUR2v < Ff6ahOnptvz; gxWDSstZUR2v = gxWDSstZUR2v + 1) {
                scanf ("%d", &tian[gxWDSstZUR2v]);
            }
            {
                gxWDSstZUR2v = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (gxWDSstZUR2v < Ff6ahOnptvz) {
                    scanf ("%d", &zKY7mglj52OD[gxWDSstZUR2v]);
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
                    gxWDSstZUR2v++;
                };
            }
            while (YlLA7SPa >= begin_tian) {
                while ((zKY7mglj52OD[CiLqXkr] < tian[begin_tian]) && (begin_tian <= YlLA7SPa)) {
                    EPlrEv6hBX9 = EPlrEv6hBX9 +200;
                    begin_tian = begin_tian + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    CiLqXkr++;
                }
                while ((tian[YlLA7SPa] > zKY7mglj52OD[end_king]) && (begin_tian <= YlLA7SPa)) {
                    EPlrEv6hBX9 = EPlrEv6hBX9 +200;
                    YlLA7SPa--;
                    end_king = end_king - 1;
                }
                if (begin_tian <= YlLA7SPa) {
                    if (tian[begin_tian] < zKY7mglj52OD[end_king])
                        EPlrEv6hBX9 = EPlrEv6hBX9 -200;
                    begin_tian++;
                    end_king--;
                };
            }
            printf ("%d\n", EPlrEv6hBX9);
        };
    };
}

