int main () {
    int nL2hqt0 [100], dQPLf64, NwUbqT1Ah, CV7DXNx4pEa;
    scanf ("%d", &dQPLf64);
    {
        NwUbqT1Ah = 0;
        while (dQPLf64 > NwUbqT1Ah) {
            scanf ("%d", &nL2hqt0[NwUbqT1Ah]);
            NwUbqT1Ah = NwUbqT1Ah +1;
        };
    }
    {
        NwUbqT1Ah = 0;
        while (NwUbqT1Ah < dQPLf64 - 1) {
            {
                CV7DXNx4pEa = NwUbqT1Ah +1;
                while (CV7DXNx4pEa < dQPLf64) {
                    if (nL2hqt0[NwUbqT1Ah] == nL2hqt0[CV7DXNx4pEa])
                        nL2hqt0[CV7DXNx4pEa] = -1;
                    CV7DXNx4pEa++;
                };
            }
            NwUbqT1Ah++;
        };
    }
    {
        NwUbqT1Ah = 0;
        while (NwUbqT1Ah < dQPLf64) {
            if (nL2hqt0[NwUbqT1Ah] != -1)
                printf ("%d", nL2hqt0[NwUbqT1Ah]);
            break;
            NwUbqT1Ah++;
        };
    }
    NwUbqT1Ah = NwUbqT1Ah +1;
    for (; NwUbqT1Ah < dQPLf64; NwUbqT1Ah = NwUbqT1Ah +1) {
        if (nL2hqt0[NwUbqT1Ah] != -1)
            printf (",%d", nL2hqt0[NwUbqT1Ah]);
    }
    return 0;
}

