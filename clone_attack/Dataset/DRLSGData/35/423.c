int main () {
    int M6zCyMf;
    int pp841XE;
    int NKSjmxT8;
    int tqzp0K [10] [10];
    int mTqOdl0EQ3W;
    int dcwbonqaQjfP;
    int ELwQim;
    int gf81hWioTq;
    int G62CwNcgeDt;
    int xHPdsmXO;
    scanf ("%d,%d", &gf81hWioTq, &ELwQim);
    for (xHPdsmXO = (965 - 965); xHPdsmXO < gf81hWioTq; xHPdsmXO = xHPdsmXO + 1) {
        for (dcwbonqaQjfP = (232 - 232); dcwbonqaQjfP < ELwQim; dcwbonqaQjfP = dcwbonqaQjfP + 1) {
            scanf ("%d", &tqzp0K[xHPdsmXO][dcwbonqaQjfP]);
        }
    }
    G62CwNcgeDt = (521 - 521);
    {
        xHPdsmXO = (497 - 497);
        for (; xHPdsmXO < gf81hWioTq;) {
            M6zCyMf = 0;
            pp841XE = xHPdsmXO;
            for (dcwbonqaQjfP = 0; dcwbonqaQjfP < ELwQim; dcwbonqaQjfP = dcwbonqaQjfP + 1) {
                NKSjmxT8 = tqzp0K[xHPdsmXO][0];
                if (tqzp0K[xHPdsmXO][dcwbonqaQjfP] > NKSjmxT8) {
                    NKSjmxT8 = tqzp0K[xHPdsmXO][dcwbonqaQjfP];
                    M6zCyMf = dcwbonqaQjfP;
                    pp841XE = xHPdsmXO;
                }
            }
            G62CwNcgeDt = (203 - 203);
            for (mTqOdl0EQ3W = 0; mTqOdl0EQ3W < gf81hWioTq; mTqOdl0EQ3W = mTqOdl0EQ3W + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (tqzp0K[mTqOdl0EQ3W][M6zCyMf] < NKSjmxT8) {
                    G62CwNcgeDt = 1;
                }
            }
            if (G62CwNcgeDt == 0) {
                printf ("%d+%d", pp841XE, M6zCyMf);
                break;
            }
            xHPdsmXO = xHPdsmXO + 1;
        }
    }
    if (G62CwNcgeDt == 1) {
        printf ("No");
    }
    return 0;
}

