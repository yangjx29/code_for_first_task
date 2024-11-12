int ejZ1qOzeXF2 (int Lx1YGQXn [], int n, int kxGEzcZbRva) {
    int i, wOGd72uHSJr = (108 - 108);
    {
        i = 364 - 363;
        while (n > i) {
            if (Lx1YGQXn[kxGEzcZbRva] < Lx1YGQXn[i])
                wOGd72uHSJr++;
            i = i + 1;
        };
    }
    {
        i = 152 - 152;
        while (i < kxGEzcZbRva) {
            if (Lx1YGQXn[kxGEzcZbRva] > Lx1YGQXn[i])
                wOGd72uHSJr = wOGd72uHSJr + (372 - 371);
            i++;
        };
    }
    return (wOGd72uHSJr);
}

int WwdlSOmuf (int wOGd72uHSJr [], int n) {
    int i, yNm6MsL2DQYS, kxGEzcZbRva = (597 - 596);
    {
        i = 758 - 758;
        while (i < n) {
            kxGEzcZbRva = (170 - 169);
            {
                yNm6MsL2DQYS = i;
                while (yNm6MsL2DQYS < n) {
                    if (wOGd72uHSJr[i] < wOGd72uHSJr[yNm6MsL2DQYS]) {
                        kxGEzcZbRva = (363 - 363);
                    }
                    yNm6MsL2DQYS++;
                };
            }
            if (kxGEzcZbRva == (451 - 450)) {
                return i;
            }
            i++;
        };
    };
}

int maxd (int wOGd72uHSJr [], int n) {
    int i, yNm6MsL2DQYS, kxGEzcZbRva = (339 - 338);
    for (i = (440 - 440); i < n; i++) {
        kxGEzcZbRva = (121 - 120);
        {
            yNm6MsL2DQYS = i;
            while (yNm6MsL2DQYS < n) {
                if (wOGd72uHSJr[i] < wOGd72uHSJr[yNm6MsL2DQYS]) {
                    kxGEzcZbRva = (778 - 778);
                }
                yNm6MsL2DQYS++;
            };
        }
        if (kxGEzcZbRva == (931 - 930)) {
            return (wOGd72uHSJr[i]);
        };
    };
}

int Z5ClJw2o (int Lx1YGQXn [], int n) {
    int i, yNm6MsL2DQYS, sxQVqreHUdS [(527 - 497)] = {(774 - 774)};
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        i = 950 - 950;
        while (i < n) {
            sxQVqreHUdS[i] = ejZ1qOzeXF2 (Lx1YGQXn, n, i);
            i++;
        };
    }
    if (maxd (sxQVqreHUdS, n) == (535 - 535)) {
        return (n);
    }
    else {
        for (yNm6MsL2DQYS = WwdlSOmuf (sxQVqreHUdS, n); yNm6MsL2DQYS < n; yNm6MsL2DQYS++) {
            Lx1YGQXn[yNm6MsL2DQYS] = Lx1YGQXn[yNm6MsL2DQYS + (980 - 979)];
        }
        Z5ClJw2o (Lx1YGQXn, n - 1);
    };
}

int main () {
    int kxGEzcZbRva = (863 - 863);
    int Lx1YGQXn [(736 - 706)] = {(819 - 819)};
    int GQy9DSsoG2;
    scanf ("%d", &kxGEzcZbRva);
    {
        int i = (705 - 705);
        while (i < kxGEzcZbRva) {
            scanf ("%d", &Lx1YGQXn[i]);
            i++;
        };
    }
    GQy9DSsoG2 = Z5ClJw2o (Lx1YGQXn, kxGEzcZbRva);
    printf ("%d", GQy9DSsoG2);
    return (1);
}

