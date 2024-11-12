main () {
    char QoLHlyGOp [10000] [40];
    int EoSptDn;
    int iLZqnTctdp;
    int s;
    int bXB2FWultS7;
    s = 0;
    scanf ("%d", &EoSptDn);
    for (iLZqnTctdp = 0; EoSptDn > iLZqnTctdp; iLZqnTctdp = iLZqnTctdp + 1) {
        scanf ("%s", QoLHlyGOp[iLZqnTctdp]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        iLZqnTctdp = 0;
        while (iLZqnTctdp < EoSptDn) {
            if (iLZqnTctdp == 0) {
                bXB2FWultS7 = strlen (QoLHlyGOp[iLZqnTctdp]);
                s = s + bXB2FWultS7;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("%s", QoLHlyGOp[iLZqnTctdp]);
            }
            else {
                bXB2FWultS7 = strlen (QoLHlyGOp[iLZqnTctdp]);
                s = s + bXB2FWultS7 + 1;
                if (s <= 80) {
                    printf (" %s", QoLHlyGOp[iLZqnTctdp]);
                }
                else {
                    printf ("%s", QoLHlyGOp[iLZqnTctdp]);
                    s = bXB2FWultS7;
                    printf ("\n");
                };
            }
            iLZqnTctdp++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

