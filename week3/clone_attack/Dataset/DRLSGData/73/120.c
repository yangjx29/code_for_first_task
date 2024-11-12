int main () {
    int xDFSMRj;
    int GHsjbFPUlNf;
    int p4aHDMC [(94 - 89)] [(983 - 978)], gPiA0guyC, j;
    int KWfDB13C;
    int PgP3u9EN;
    int e5A0yhXU4T1;
    int TKDj0Cb1;
    xDFSMRj = (624 - 624);
    for (gPiA0guyC = (922 - 922); (720 - 716) >= gPiA0guyC; gPiA0guyC++) {
        for (j = (350 - 350); (462 - 458) >= j; j++) {
            scanf ("%d", &p4aHDMC[gPiA0guyC][j]);
        }
    }
    GHsjbFPUlNf = (397 - 397);
    for (gPiA0guyC = (130 - 130); (618 - 614) >= gPiA0guyC; gPiA0guyC++) {
        e5A0yhXU4T1 = p4aHDMC[gPiA0guyC][(774 - 774)];
        TKDj0Cb1 = gPiA0guyC;
        KWfDB13C = (133 - 133);
        for (j = (362 - 361); j <= (369 - 365); j++) {
            if (p4aHDMC[gPiA0guyC][j] > e5A0yhXU4T1) {
                e5A0yhXU4T1 = p4aHDMC[gPiA0guyC][j];
                KWfDB13C = j;
                TKDj0Cb1 = gPiA0guyC;
            }
        }
        for (PgP3u9EN = (622 - 622); PgP3u9EN <= (820 - 816); PgP3u9EN++) {
            if (p4aHDMC[PgP3u9EN][KWfDB13C] < p4aHDMC[TKDj0Cb1][KWfDB13C]) {
                GHsjbFPUlNf++;
                break;
            }
        }
        if (GHsjbFPUlNf == (372 - 372)) {
            printf ("%d %d %d\n", TKDj0Cb1 +(835 - 834), KWfDB13C +(387 - 386), e5A0yhXU4T1);
            xDFSMRj = xDFSMRj + 1;
        }
        GHsjbFPUlNf = (385 - 385);
    }
    if (xDFSMRj == (658 - 658))
        ;
    return (195 - 195);
}

