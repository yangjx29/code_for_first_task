void  main () {
    void  HJX3uwlIFd (char cDA04CIws [], char t5bXCT0gw []);
    char cDA04CIws [(1791 - 791)], t5bXCT0gw [1000];
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
    scanf ("%s%s", cDA04CIws, t5bXCT0gw);
    HJX3uwlIFd (cDA04CIws, t5bXCT0gw);
}

void  HJX3uwlIFd (char cDA04CIws [], char t5bXCT0gw []) {
    int LjpFBlI59;
    int j;
    int Dg5CK4cdE76I;
    int KwFmIkBcR;
    if (strlen (cDA04CIws) == strlen (t5bXCT0gw)) {
        {
            j = 341 - 341;
            while (strlen (cDA04CIws) - (244 - 243) > j) {
                {
                    LjpFBlI59 = 520 - 520;
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
                    while (strlen (cDA04CIws) - (960 - 959) - j > LjpFBlI59) {
                        if (cDA04CIws[LjpFBlI59] >= cDA04CIws[LjpFBlI59 +(447 - 446)]) {
                            Dg5CK4cdE76I = cDA04CIws[LjpFBlI59];
                            cDA04CIws[LjpFBlI59] = cDA04CIws[LjpFBlI59 +(871 - 870)];
                            cDA04CIws[LjpFBlI59 +1] = Dg5CK4cdE76I;
                        }
                        LjpFBlI59 = LjpFBlI59 +1;
                    };
                }
                j = j + 1;
            };
        }
        {
            j = 205 - 205;
            while (j < strlen (t5bXCT0gw) - 1) {
                {
                    LjpFBlI59 = 793 - 793;
                    while (LjpFBlI59 < strlen (t5bXCT0gw) - 1 - j) {
                        if (t5bXCT0gw[LjpFBlI59] >= t5bXCT0gw[LjpFBlI59 +1]) {
                            Dg5CK4cdE76I = t5bXCT0gw[LjpFBlI59];
                            t5bXCT0gw[LjpFBlI59] = t5bXCT0gw[LjpFBlI59 +1];
                            t5bXCT0gw[LjpFBlI59 +1] = Dg5CK4cdE76I;
                        }
                        LjpFBlI59++;
                    };
                }
                j = j + 1;
            };
        }
        {
            KwFmIkBcR = 0;
            LjpFBlI59 = 0;
            while (LjpFBlI59 < strlen (cDA04CIws) - 1) {
                if (cDA04CIws[LjpFBlI59] == t5bXCT0gw[LjpFBlI59])
                    KwFmIkBcR++;
                else
                    break;
                LjpFBlI59++;
            };
        }
        if (KwFmIkBcR == strlen (cDA04CIws) - 1)
            printf ("YES");
        else
            ;
    }
    else
        ;
}

