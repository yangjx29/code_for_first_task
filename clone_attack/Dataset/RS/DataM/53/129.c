void  main () {
    int pSpk6b;
    int WU1dRth [300];
    int EFYX5tNhiTC;
    int esSuqTfGm;
    int IP1I3ci8tm6;
    int sUg12lOFrNAG;
    int ijBnpKTMm58 [300];
    int BIYQ9lc2V1bh;
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
    scanf ("%d\n", &pSpk6b);
    {
        EFYX5tNhiTC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (EFYX5tNhiTC < pSpk6b) {
            scanf ("%d", &WU1dRth[EFYX5tNhiTC]);
            ijBnpKTMm58[EFYX5tNhiTC] = 1;
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
            EFYX5tNhiTC = EFYX5tNhiTC +1;
        };
    }
    {
        EFYX5tNhiTC = 0;
        while (EFYX5tNhiTC < pSpk6b) {
            {
                esSuqTfGm = 0;
                while (esSuqTfGm < EFYX5tNhiTC) {
                    if (WU1dRth[EFYX5tNhiTC] == WU1dRth[esSuqTfGm])
                        ijBnpKTMm58[EFYX5tNhiTC] = 0;
                    esSuqTfGm = esSuqTfGm + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            EFYX5tNhiTC++;
        };
    }
    {
        IP1I3ci8tm6 = pSpk6b - 1;
        while (0 <= IP1I3ci8tm6) {
            if (ijBnpKTMm58[IP1I3ci8tm6] != 0) {
                BIYQ9lc2V1bh = IP1I3ci8tm6;
                break;
            }
            else
                continue;
            IP1I3ci8tm6--;
        };
    }
    for (sUg12lOFrNAG = 0; sUg12lOFrNAG < BIYQ9lc2V1bh; sUg12lOFrNAG++) {
        if (ijBnpKTMm58[sUg12lOFrNAG] != 0)
            printf ("%d,", WU1dRth[sUg12lOFrNAG]);
    }
    printf ("%d", WU1dRth[BIYQ9lc2V1bh]);
}

