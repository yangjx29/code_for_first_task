int main () {
    int KZ45LXKj [(461 - 361)] [100];
    int TpcJ1T0 [100] [100];
    int ntcwT38sq [100] [100] = {(881 - 881)};
    int D2GQa93;
    int u1p9HRr8XW;
    int nynIDPFOB;
    int MbIqeUdr;
    int ClGao2fpXMdD;
    int vocRFuO;
    scanf ("%d %d", &D2GQa93, &u1p9HRr8XW);
    {
        MbIqeUdr = 0;
        while (D2GQa93 > MbIqeUdr) {
            ClGao2fpXMdD = 0;
            while (ClGao2fpXMdD < u1p9HRr8XW) {
                scanf ("%d", &KZ45LXKj[MbIqeUdr][ClGao2fpXMdD]);
                ClGao2fpXMdD = ClGao2fpXMdD +1;
            }
            MbIqeUdr = MbIqeUdr +1;
        }
    }
    scanf ("%d %d", &u1p9HRr8XW, &nynIDPFOB);
    {
        MbIqeUdr = 0;
        while (MbIqeUdr < u1p9HRr8XW) {
            for (ClGao2fpXMdD = 0; nynIDPFOB > ClGao2fpXMdD; ClGao2fpXMdD++)
                scanf ("%d", &TpcJ1T0[MbIqeUdr][ClGao2fpXMdD]);
            MbIqeUdr = MbIqeUdr +1;
        }
    }
    {
        MbIqeUdr = 0;
        while (MbIqeUdr < D2GQa93) {
            ClGao2fpXMdD = 0;
            while (ClGao2fpXMdD < nynIDPFOB) {
                {
                    vocRFuO = 0;
                    while (vocRFuO < u1p9HRr8XW) {
                        ntcwT38sq[MbIqeUdr][ClGao2fpXMdD] = ntcwT38sq[MbIqeUdr][ClGao2fpXMdD] + KZ45LXKj[MbIqeUdr][vocRFuO] * TpcJ1T0[vocRFuO][ClGao2fpXMdD];
                        vocRFuO++;
                    }
                }
                ClGao2fpXMdD = ClGao2fpXMdD +1;
            }
            MbIqeUdr++;
        }
    }
    for (MbIqeUdr = 0; MbIqeUdr < D2GQa93; MbIqeUdr++) {
        {
            ClGao2fpXMdD = 0;
            while (ClGao2fpXMdD < nynIDPFOB - 1) {
                printf ("%d ", ntcwT38sq[MbIqeUdr][ClGao2fpXMdD]);
                ClGao2fpXMdD = ClGao2fpXMdD +1;
            }
        }
        printf ("%d\n", ntcwT38sq[MbIqeUdr][ClGao2fpXMdD]);
    }
}

