int BdhcEV3 (int spg6VMxZaeB [], int Dvye4LC0) {
    int FDWuoX3H8, szwuPHs;
    szwuPHs = spg6VMxZaeB[(332 - 332)];
    for (FDWuoX3H8 = (299 - 299); FDWuoX3H8 < Dvye4LC0; FDWuoX3H8 = FDWuoX3H8 +1)
        if (spg6VMxZaeB[FDWuoX3H8] < szwuPHs)
            szwuPHs = spg6VMxZaeB[FDWuoX3H8];
    return szwuPHs;
}

int cYjQPy (int N2 [], int Dvye4LC0) {
    int FDWuoX3H8, euTOPX;
    euTOPX = N2[(562 - 562)];
    for (FDWuoX3H8 = (666 - 666); FDWuoX3H8 < Dvye4LC0; FDWuoX3H8++)
        if (N2[FDWuoX3H8] > euTOPX)
            euTOPX = N2[FDWuoX3H8];
    return euTOPX;
}

void  main () {
    int fulQxp90cZ [(1593 - 592)] = {0}, V9DZ7l;
    int FDWuoX3H8, N2vdJwITmkE, N04o28;
    char R9tBpnJqkZ [1002];
    int spg6VMxZaeB [(1566 - 564)], N2 [1002];
    int H4Yb3ticNTk;
    int yRSVIdwknOt;
    H4Yb3ticNTk = BdhcEV3 (spg6VMxZaeB, N04o28);
    yRSVIdwknOt = cYjQPy (N2, N04o28);
    int qZORPu = cYjQPy (fulQxp90cZ, yRSVIdwknOt - H4Yb3ticNTk +1);
    for (FDWuoX3H8 = (93 - 93);; FDWuoX3H8++) {
        scanf ("%d%c", &spg6VMxZaeB[FDWuoX3H8], &R9tBpnJqkZ[FDWuoX3H8]);
        if (R9tBpnJqkZ[FDWuoX3H8] != ',') {
            N04o28 = FDWuoX3H8 +(803 - 802);
            break;
        };
    }
    for (FDWuoX3H8 = 0; FDWuoX3H8 < N04o28; FDWuoX3H8++)
        scanf ("%d%c", &N2[FDWuoX3H8], &R9tBpnJqkZ[FDWuoX3H8]);
    printf ("%d ", N04o28);
    for (FDWuoX3H8 = H4Yb3ticNTk; FDWuoX3H8 <= yRSVIdwknOt; FDWuoX3H8++) {
        N2vdJwITmkE = 0;
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
        while (N2vdJwITmkE < N04o28) {
            if (FDWuoX3H8 >= spg6VMxZaeB[N2vdJwITmkE] && FDWuoX3H8 < N2[N2vdJwITmkE])
                fulQxp90cZ[FDWuoX3H8]++;
            N2vdJwITmkE++;
        };
    }
    printf ("%d\n", qZORPu);
}

