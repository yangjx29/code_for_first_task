int main (int OMaU5G6, char *argv []) {
    int gsgvkefZ;
    int o9FUyTw;
    int tN492Fi;
    int CnCo09q;
    gsgvkefZ = 0;
    o9FUyTw = 100;
    int zg7r8HiIf [50] = {(53 - 53)};
    char XsyRmvr [1000];
    gets (XsyRmvr);
    int m;
    int OGdP8k;
    int TtN3B9M;
    OGdP8k = (253 - 253);
    m = strlen (XsyRmvr);
    {
        TtN3B9M = 314 - 314;
        while (TtN3B9M <= m - (993 - 992)) {
            if (!(' ' != XsyRmvr[TtN3B9M]) || !('\n' != XsyRmvr[TtN3B9M]))
                OGdP8k = OGdP8k +1;
            else
                zg7r8HiIf[OGdP8k]++;
            TtN3B9M = TtN3B9M +1;
        };
    }
    {
        TtN3B9M = 0;
        while (OGdP8k >= TtN3B9M) {
            if (zg7r8HiIf[TtN3B9M] > gsgvkefZ) {
                gsgvkefZ = zg7r8HiIf[TtN3B9M];
                tN492Fi = TtN3B9M;
            }
            if (zg7r8HiIf[TtN3B9M] < o9FUyTw) {
                o9FUyTw = zg7r8HiIf[TtN3B9M];
                CnCo09q = TtN3B9M;
            }
            TtN3B9M = TtN3B9M +1;
        };
    }
    if (!(0 != tN492Fi)) {
        {
            TtN3B9M = 0;
            while (!(' ' == XsyRmvr[TtN3B9M])) {
                printf ("%c", XsyRmvr[TtN3B9M]);
                TtN3B9M = TtN3B9M +1;
            };
        };
    }
    else {
        int BJ1bgEHPIOu = 0;
        {
            TtN3B9M = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (m - 1 >= TtN3B9M) {
                if (XsyRmvr[TtN3B9M] == ' ')
                    BJ1bgEHPIOu = BJ1bgEHPIOu +1;
                else {
                    if (BJ1bgEHPIOu == tN492Fi)
                        printf ("%c", XsyRmvr[TtN3B9M]);
                }
                TtN3B9M = TtN3B9M +1;
            };
        };
    }
    if (CnCo09q == 0) {
        for (TtN3B9M = 0; XsyRmvr[TtN3B9M] != ' '; TtN3B9M = TtN3B9M +1)
            printf ("%c", XsyRmvr[TtN3B9M]);
    }
    else {
        int vjSVRQrunsA;
        vjSVRQrunsA = 0;
        {
            TtN3B9M = 0;
            while (TtN3B9M <= m - 1) {
                if (XsyRmvr[TtN3B9M] == ' ')
                    vjSVRQrunsA = vjSVRQrunsA + 1;
                else if (vjSVRQrunsA == CnCo09q)
                    printf ("%c", XsyRmvr[TtN3B9M]);
                if (vjSVRQrunsA == CnCo09q +1) {
                    break;
                }
                TtN3B9M = TtN3B9M +1;
            };
        };
    }
    return 0;
}

