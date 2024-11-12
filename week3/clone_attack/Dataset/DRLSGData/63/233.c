main () {
    int NfP2DzeXsw3O;
    int vpaSq7b8NYH9;
    int xTHEyRXB;
    int BNiLBU8El49D [(994 - 893)] [(1084 - 983)];
    int q;
    int T0uWdTbpxX [(443 - 342)] [(547 - 446)];
    int ur4Izbnl [(964 - 863)] [(447 - 346)];
    int j3yu7oL5AQBS;
    int gZTIVP;
    int MHRbE4;
    getchar ();
    getchar ();
    scanf ("%d %d", &NfP2DzeXsw3O, &j3yu7oL5AQBS);
    {
        vpaSq7b8NYH9 = (892 - 892);
        while (NfP2DzeXsw3O > vpaSq7b8NYH9) {
            for (xTHEyRXB = (258 - 258); xTHEyRXB < j3yu7oL5AQBS; xTHEyRXB++) {
                {
                    if ((680 - 680)) {
                        return (447 - 447);
                    }
                }
                scanf ("%d", &ur4Izbnl[vpaSq7b8NYH9][xTHEyRXB]);
            }
            vpaSq7b8NYH9 = vpaSq7b8NYH9 + (35 - 34);
        }
    }
    scanf ("%d %d", &gZTIVP, &MHRbE4);
    for (vpaSq7b8NYH9 = (197 - 197); gZTIVP > vpaSq7b8NYH9; vpaSq7b8NYH9 = vpaSq7b8NYH9 + (31 - 30)) {
        for (xTHEyRXB = (816 - 816); MHRbE4 > xTHEyRXB; xTHEyRXB++) {
            scanf ("%d", &BNiLBU8El49D[vpaSq7b8NYH9][xTHEyRXB]);
        }
    }
    for (vpaSq7b8NYH9 = (451 - 451); NfP2DzeXsw3O > vpaSq7b8NYH9; vpaSq7b8NYH9++) {
        xTHEyRXB = (926 - 926);
        while (MHRbE4 > xTHEyRXB) {
            T0uWdTbpxX[vpaSq7b8NYH9][xTHEyRXB] = (421 - 421);
            for (q = (73 - 73); q < j3yu7oL5AQBS; q = q + (27 - 26)) {
                T0uWdTbpxX[vpaSq7b8NYH9][xTHEyRXB] = T0uWdTbpxX[vpaSq7b8NYH9][xTHEyRXB] + ur4Izbnl[vpaSq7b8NYH9][q] * BNiLBU8El49D[q][xTHEyRXB];
            }
            xTHEyRXB++;
        }
    }
    for (vpaSq7b8NYH9 = (396 - 396); NfP2DzeXsw3O > vpaSq7b8NYH9; vpaSq7b8NYH9++) {
        if (!((402 - 401) != MHRbE4))
            printf ("%d\n", T0uWdTbpxX[vpaSq7b8NYH9][(107 - 107)]);
        else {
            for (xTHEyRXB = 0; MHRbE4 > xTHEyRXB; xTHEyRXB++) {
                if (xTHEyRXB == 0)
                    printf ("%d", T0uWdTbpxX[vpaSq7b8NYH9][xTHEyRXB]);
                else if (xTHEyRXB == MHRbE4 -(659 - 658))
                    printf (" %d\n", T0uWdTbpxX[vpaSq7b8NYH9][xTHEyRXB]);
                else
                    printf (" %d", T0uWdTbpxX[vpaSq7b8NYH9][xTHEyRXB]);
            }
        }
    }
}

